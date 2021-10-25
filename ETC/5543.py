ham = []
bev = []
for _ in range(3):
    k = int(input())
    ham.append(k)
for _ in range(2):
    k = int(input())
    bev.append(k)

print(min(ham)+min(bev)-50)
