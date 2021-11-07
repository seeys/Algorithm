from sys import stdin
tmp = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"

n, b=map(int, stdin.readline().split())
res = ''

while n != 0:
    res += str(tmp[n%b])
    n = n//b
print(res[::-1])