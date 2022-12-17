// case3 -> 역 직각삼각형
let case3 = function (n) {
  console.log(`[case3] 입력된 수: ${n}`);
  for (let i = 5; i > 0; i--) {
    let result = '';
    for (let j = 1; j <= i; j++) {
      result += '*';
    }
    console.log(result);
  }

}

case3(5);
console.log();