function largestNumber(...a){
    let largestNumber = a[0];
    for(let i=0;i<a.length;i++){
        largestNumber = Math.max(largestNumber, a[i]);
    }
    return largestNumber;
}
console.log(largestNumber(1, 2, 5, 4, 3));