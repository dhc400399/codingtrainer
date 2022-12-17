let input = require('fs').readFileSync('/dev/stdin').toString().trim().split('');
let numArr = [10];

input.sort((a, b) => a-b);

for(let i=0; i<10; i++) {
    numArr[i] = input.lastIndexOf(i.toString())+1;
    if(numArr[i] != 0) {
        input.splice(0, numArr[i]);
    }
}

let nine = numArr.splice(9, 1, 0)[0];
let six = numArr.splice(6, 1, 0)[0];
let maxNum = Math.max(...numArr);

if(Math.ceil((nine+six)/2) >= maxNum) console.log(Math.ceil((nine+six)/2));
else console.log(maxNum);