s = input()
s = list(s)
res = []

while len(s) > 0:
    res.append(''.join(s))
    s.pop(0)

res = sorted(res)
for i in res:
    print(i)