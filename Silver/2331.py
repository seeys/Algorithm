import sys

a, p = map(int, sys.stdin.readline().split())
arr = [a]

while True:
    s = 0
    for i in str(arr[-1]):
        s += int(i) ** p
    if s in arr:
        break
    arr.append(s)

print(arr.index(s))