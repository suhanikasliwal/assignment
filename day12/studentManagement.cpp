#include <iostream>
#include <fstream>
#include <vector>
#include <stdexcept>
#include <string>
#include <sstream>
using namespace std;

class Student {
    int rollNo;
    string name;
    int marks[3];

public:
    Student() {}

    Student(int r, string n, int m1, int m2, int m3) {
        validateMarks(m1, m2, m3);
        rollNo = r;
        name = n;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }

    void validateMarks(int m1, int m2, int m3) {
        if (m1 < 0 || m1 > 100 || m2 < 0 || m2 > 100 || m3 < 0 || m3 > 100)
            throw invalid_argument("Marks must be between 0 and 100");
    }

    int getRollNo() const { return rollNo; }
    string getName() const { return name; }

    float average() const {
        return (marks[0] + marks[1] + marks[2]) / 3.0f;
    }

    void updateMarks(int m1, int m2, int m3) {
        validateMarks(m1, m2, m3);
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }

    void display() const {
        cout << "Roll No: " << rollNo << ", Name: " << name
             << ", Marks: [" << marks[0] << ", " << marks[1] << ", " << marks[2] << "]"
             << ", Average: " << average() << endl;
    }

    // Overload ++ to increment marks
    Student& operator++() {
        for (int i = 0; i < 3; ++i)
            if (marks[i] < 100) marks[i]++;
        return *this;
    }

    // Overload > to compare average marks
    bool operator>(const Student& other) const {
        return this->average() > other.average();
    }

    // Save student to file
    void save(ofstream& out) const {
        out << rollNo << "," << name << "," << marks[0] << "," << marks[1] << "," << marks[2] << "\n";
    }

    // Load student from file line
    static Student load(const string& line) {
        stringstream ss(line);
        string token;
        vector<string> parts;
        while (getline(ss, token, ',')) {
            parts.push_back(token);
        }
        if (parts.size() != 5)
            throw runtime_error("Invalid record format");
        return Student(stoi(parts[0]), parts[1], stoi(parts[2]), stoi(parts[3]), stoi(parts[4]));
    }
};
class Gradebook {
    vector<Student> students;

public:
    Gradebook() {
        loadFromFile();
    }

    void addStudent(const Student& s) {
        for (const auto& st : students)
            if (st.getRollNo() == s.getRollNo())
                throw runtime_error("Duplicate roll number");
        students.push_back(s);
    }

    void displayAll() const {
        if (students.empty())
            throw runtime_error("Gradebook is empty");
        for (const auto& s : students)
            s.display();
    }

    Student* searchByRoll(int roll) {
        for (auto& s : students)
            if (s.getRollNo() == roll)
                return &s;
        return nullptr;
    }

    void updateStudentMarks(int roll, int m1, int m2, int m3) {
        Student* s = searchByRoll(roll);
        if (!s)
            throw runtime_error("Student not found");
        s->updateMarks(m1, m2, m3);
    }

    void saveToFile() const {
        ofstream out("gradebook.txt");
        for (const auto& s : students)
            s.save(out);
        out.close();
    }

    void loadFromFile() {
        ifstream in("gradebook.txt");
        string line;
        while (getline(in, line)) {
            try {
                Student s = Student::load(line);
                students.push_back(s);
            } catch (...) {
                cerr << "Error loading student: " << line << endl;
            }
        }
        in.close();
    }
};
int main() {
    Gradebook gb;

    try {
        gb.addStudent(Student(101, "Alice", 85, 90, 88));
        gb.addStudent(Student(102, "Bob", 78, 82, 80));

        ++(*gb.searchByRoll(101)); // Bonus marks to Alice

        gb.updateStudentMarks(102, 90, 92, 95); // Update Bob's marks

        gb.displayAll();

        if (*gb.searchByRoll(101) > *gb.searchByRoll(102))
            cout << "Alice has higher average than Bob\n";
        else
            cout << "Bob has higher average than Alice\n";

        gb.saveToFile();
    } catch (exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}









