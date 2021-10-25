n, k = map(int, input().split())
flag = [False] * (n + 1)

cnt = 0

for x in range(2, n + 1):
    for y in range(x, n + 1, x):  # 찾은 수의 배수를 구하기위해 x만큼씩
        if not flag[y]:
            flag[y] = True
            cnt += 1
            if cnt == k:
                print(y)
