class Difference:
    def __init__(self, a):
        self.__elements = a

    def computeDifference(self):
        maximum = 0
        min_ele=101
        max_ele = -1

        for i in range(len(self.__elements)):
            if self.__elements[i] < min_ele : min_ele = self.__elements[i]
            if self.__elements[i] > max_ele : max_ele = self.__elements[i]
        self.maximumDifference =  max_ele - min_ele

# End of Difference class

_ = input()
a = [int(e) for e in input().split(' ')]

d = Difference(a)
d.computeDifference()

print(d.maximumDifference)