a,b,c,d = map(int, input().split())
x,y,z,w = map(int, input().split())

s = a + b + c + d
k = x + y + z + w

if s >= k:
    print(s)
elif k > s:
    print(k)
