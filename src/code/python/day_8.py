import sys
pb = {}
for i in range(int(input())):
    contact = input().split(' ')
    pb[contact[0]] = contact[1]

query = sys.stdin.readline().strip()
while query:
    if query in pb:
        print("{}={}".format(query, pb[query]))
    else:
        print("Not found")
    query = sys.stdin.readline().strip()
