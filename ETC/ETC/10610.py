n = list(map(int, input()))
total = sum(n)
if total % 3 == 0:
    n.sort(reverse=True)
    m = n[-1]
    if m == 0:
        res = ''.join(map(str, n))
        print(res)
    else:
        print("-1")
else:
    print("-1")