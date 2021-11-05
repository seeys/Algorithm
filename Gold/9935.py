import sys

a = list(sys.stdin.readline().rstrip())
b = list(sys.stdin.readline().rstrip())

s = []

for i in range(len(a)):
    s.append(a[i])
    if s[-1] == b[-1] and len(s) >= len(b):
        if s[-len(b):] == b:
            for j in range(len(b)):
                s.pop()

if s:
    print("".join(s))
else:
    print("FRULA")