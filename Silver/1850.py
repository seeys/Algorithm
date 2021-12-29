import math
a, b = map(int,input().split())
k = math.gcd(a,b)
print('1'*k)