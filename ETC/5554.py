a = []
for _ in range(4):
    k = int(input())
    a.append(k)
b = sum(a)
print(b//60)
print(b%60)