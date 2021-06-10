import java.util.*;

class Person {
    protected String firstName;
    protected String lastName;
    protected int idNumber;
    
    Person(String firstName, String lastName, int identification){
        this.firstName = firstName;
        this.lastName = lastName;
        this.idNumber = identification;
    }
    
    public void printPerson(){
        System.out.println("Name: " + lastName + ", " + firstName + "\nID: " + idNumber);
    }
     
}

class Student extends Person{
    private int[] scores;
   
    Student(String firstName, String lastName, int identification, int[] scores){ 
        super(firstName,lastName,identification);
        this.scores = scores; 
    }

    
    public char calculate (){
        
        int total = 0, n = scores.length;
        for (int i = 0; i < n; i++) {
            total += scores[i];
        }
        int avg = total / n;
        if (avg > 89) return 'O';
        if (avg > 79) return 'E';
        if (avg > 69) return 'A';
        if (avg > 54) return 'P';
        if (avg > 39) return 'D';
        return 'T';

    }
}
class Solution {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String firstName = scan.next();
        String lastName = scan.next();
        int id = scan.nextInt();
        int numScores = scan.nextInt();
        int[] testScores = new int[numScores];
        for(int i = 0; i < numScores; i++){
            testScores[i] = scan.nextInt();
        }
        scan.close();
        
        Student s = new Student(firstName, lastName, id, testScores);
        s.printPerson();
        System.out.println("Grade: " + s.calculate() );
    }
}