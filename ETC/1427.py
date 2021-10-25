n = int(input())
a = []

while(n != 0):
    a.append(n%10)
    n = n // 10
a.sort()
a.reverse()
for i in a:
    print(i,end='')