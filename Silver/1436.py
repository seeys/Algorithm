n = int(input())

i = 0
cnt = 0
title = 0
while True:
    i += 1
    j = str(i)
    if j.count("666") >= 1:
        title = i
        cnt += 1
    if cnt == n:
        break

print(title)