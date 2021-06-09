function processData(input) {
    input = input.split('\n');
    let pb = {};

    for(i=1;i<=parseInt(input[0]);i++) {
        let entry =input[i].split(' ')
        pb[entry[0]] = entry[1]
    }

    for(i=(parseInt(input[0])+1); i<input.length; i++){
        if(pb[input[i]]) 
            console.log(input[i] + "=" + pb[input[i]])
        else
            console.log("Not found")
            
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
