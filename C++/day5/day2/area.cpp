#include<iostream>
using namespace std;
int areaRectangle(int a, int b)
{
   int area = a * b;
   return area;
}

int main()
{
  int a = 5;
  int b = 6;
  cout << "Area = " << 
           areaRectangle(a, b) << 
           endl;
  return 0;
}