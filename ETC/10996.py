import math
n = int(input())

for _ in range(n):
    print("* "*math.floor(1+(n-1)/2)) #첫번째줄 내림해서 그 만큼 출력
    print(" *"*math.ceil((n-1)/2))