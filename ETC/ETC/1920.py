n = int(input())
arr = list(map(int, input().split()))
m = int(input())
farr = list(map(int, input().split()))

for i in farr:
    if i in arr:
        print("1")
    else:
        print("0")