let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12];
let maxNum = 0;
for(let i=0;i<arr.length;i++){
    if(arr[i]>maxNum){
        maxNum = arr[i];
    }
}
console.log("Maximum Number is "+maxNum);
//using foreach
const arr1 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12];
let maxNum1 = 0;
arr1.forEach(ele=>{if(ele>maxNum1)maxNum1=ele;})
console.log("Maximum Number is using foreach "+maxNum1);
//using in-built method

arr1.sort((a, b)=>a-b);
console.log("Maximum Number is: "+arr1[arr.length-1]);
