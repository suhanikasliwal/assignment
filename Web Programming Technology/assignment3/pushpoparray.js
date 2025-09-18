function push1(arr,num){
    let arr1=new Array(arr.length+1);
    for(let i=0;i<arr.length;i++){
        arr1[i] = arr[i];
    }
    arr1[arr.length] = num;
    return arr1;
}
let arr=[];
while(1){
console.log("Perform Operation On Array: ");
console.log("1. Push");
console.log("2. Pop");
console.log("3. Unshift");
console.log("4. Shift");
console.log("5. Length");
console.log("6. Exit");
let a = prompt("Enter the operation which you want to perform: ");
if(a==6){
    break;
}
switch(a){
    case 1:
        let arr1 = push1(arr, 1);
        for(let i=0;i<arr1.length;i++){
            console.log(arr1[i]);
        }
        //console.log(arr.push(10));
        break;
    case 2:
        console.log(arr.pop());
        break;
    case 3:
        console.log(arr.unshift(6));
        break;
    case 4:
        console.log(arr.shift(12));
        break;
    case 5:
        console.log(arr.length);
        break;
    }
    
}