import sys

w, h = map(int, sys.stdin.readline().split())
p, q = map(int, sys.stdin.readline().split())
t = int(sys.stdin.readline())
w_arr = [i for i in range(w)]
h_arr = [i for i in range(h)]
for i in range(w, 0, -1):
    w_arr.append(i)
for j in range(h, 0, -1):
    h_arr.append(j)

x = w_arr[(p+t) % (2*w)]
y = h_arr[(q+t) % (2*h)]
print(x,y)