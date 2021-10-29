n = int(input())
arr= []
for _ in range(9):
    arr.append(int(input()))

print(n-sum(arr))