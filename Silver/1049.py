n, m = map(int, input().split())
p = []
k = []
nat = []
for _ in range(m):
    a, b = map(int, input().split())
    p.append(a)
    k.append(b)
    nat.append(b*6)

m_one = min(k)
m_pak = min(p)
m_nat = min(nat)
res = 0
if n <= 6:
    res = min(m_one*n,m_pak)
else:
    res = min(m_pak,m_nat) * (n//6) + min(m_one*(n%6), m_pak)

print(res)