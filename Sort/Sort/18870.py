n = int(input())
a = list(map(int,input().split()))
x = list(sorted(set(a)))
x = {x[i]:i for i in range(len(x))}

for i in a:
    print(x[i], end=" ")


