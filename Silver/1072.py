x, y = map(int, input().split())
z = y * 100 // x
k1 = x * z + x - 100 * y
k2 = 99 - z
if x == y or z >= 99:
    print(-1)
elif k1 % k2 == 0:
    print(k1 // k2)
else:
    print(k1 // k2 + 1)
