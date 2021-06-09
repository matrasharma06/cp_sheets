'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', function(inputStdin) {
    inputString += inputStdin;
});

process.stdin.on('end', function() {
    inputString = inputString.split('\n');

    main();
});

function readLine() {
    return inputString[currentLine++];
}

function main() {
  var arr = Array(6);
  var i,j;
  for (i = 0; i < 6; i++) {
    arr[i] = readLine().split(' ');
    arr[i] = arr[i].map(Number);
  }

  var ans = -64;
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++)
    {ans = Math.max(ans, arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] +                   arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2])}
  }
  console.log(ans)
}