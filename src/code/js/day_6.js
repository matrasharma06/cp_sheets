function processData(input) {
    input = input.split('\n')
    for(let i=1;i<=input[0];i++){
        var str = input[i].split('');
        
        for(x=0;x<str.length;x+=2)
        process.stdout.write(str[x])
        process.stdout.write(" ")
        for(x=1;x<str.length;x+=2)
        process.stdout.write(str[x])
        console.log(' ')
    }
} 

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input);
});
