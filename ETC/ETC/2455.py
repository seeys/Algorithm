total_people = []
k = 0
for _ in range(4):
    in_p, out_p = map(int,input().split())
    k = k - in_p + out_p
    total_people.append(k)
print(max(total_people))