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
    var n = parseInt(readLine().trim(), 10);
    var ans = 0, series = 0;
    
    while(n>0)
    {
        if (n%2 == 1)
            series++
        else
            series = 0
            
        ans = Math.max(ans, series)
        n = parseInt(n/2)
    }
    console.log(ans);
}
