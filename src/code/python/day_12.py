class Person:
	def __init__(self, firstName, lastName, idNumber):
		self.firstName = firstName
		self.lastName = lastName
		self.idNumber = idNumber
	def printPerson(self):
		print("Name:", self.lastName + ",", self.firstName)
		print("ID:", self.idNumber)

class Student(Person):
    def __init__(self, firstName, lastName, idNumber, testScores):
        super().__init__(firstName, lastName, idNumber)
        self.testScores = testScores

    def calculate(self):
        total = 0
        for testScore in self.testScores:
            total += testScore
        avg = total // len(self.testScores)

        if avg > 89 : return 'O'
        if avg > 79 : return 'E'
        if avg > 69 : return 'A'
        if avg > 54 : return 'P'
        if avg > 39 : return 'D'
        return 'T'

line = input().split()