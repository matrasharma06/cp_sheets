#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
private:
    vector<int> testScores;
public:
    Student(string firstName, string lastName, int id, vector<int> scores) : Person(firstName, lastName, id) {
        this->testScores = scores;
    }

    char calculate() {
        int total = 0;
        int n = testScores.size();
        for (int i = 0; i < n; i++)
        total += this->testScores[i];

        int avg = total / n;

        if (avg > 89) return 'O';
        if (avg > 79) return 'E';
        if (avg > 69) return 'A';
        if (avg > 54) return 'P';
        if (avg > 39) return 'D';
        return 'T';
    }
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}