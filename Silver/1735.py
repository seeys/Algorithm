import math
a, b = map(int,input().split())
x, y = map(int, input().split())

m = b * y #분모
n = (a * y) + (b * x) #분자
k = math.gcd(n, m)
print(n//k, m//k)