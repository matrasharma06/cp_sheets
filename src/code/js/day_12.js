'use strict';

var _input = '';
var _index = 0;
process.stdin.on('data', (data) => { _input += data; });
process.stdin.on('end', () => {
    _input = _input.split(new RegExp('[ \n]+'));
    main();    
});
function read() { return _input[_index++]; }

/**** Ignore above this line. ****/

class Person {
    constructor(firstName, lastName, identification) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.idNumber = identification;
    }
    
    printPerson() {
        console.log(
            "Name: " + this.lastName + ", " + this.firstName 
            + "\nID: " + this.idNumber
        )
    }
}

class Student extends Person {
    
  constructor(firstName, lastName, identification, testScores) {
    super(firstName, lastName, identification)
    this.testScores = testScores
    }
  
   calculate() {
    var total = 0;
    this.testScores.forEach(score => { total += score })
    var avg = (total / this.testScores.length);
    if (avg > 89) return 'O';
    if (avg > 79) return 'E';
    if (avg > 69) return 'A';
    if (avg > 54) return 'P';
    if (avg > 39) return 'D';
    return 'T';
   }
}

function main() {
    let firstName = read()
    let lastName = read()
    let id = +read()
    let numScores = +read()
    let testScores = new Array(numScores)
    
    for (var i = 0; i < numScores; i++) {
        testScores[i] = +read()  
    }

    let s = new Student(firstName, lastName, id, testScores)
    s.printPerson()
    s.calculate()
    console.log('Grade: ' + s.calculate())
}
