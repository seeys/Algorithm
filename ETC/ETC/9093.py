t = int(input())
for _ in range(t):
    s = input()
    arr = s.split(' ')
    res = []
    for i in arr:
        res.append(''.join(reversed(i)))
    print(' '.join(res))
