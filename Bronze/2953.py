a1 = list(map(int,input().split()))
a2 = list(map(int,input().split()))
a3 = list(map(int,input().split()))
a4 = list(map(int,input().split()))
a5 = list(map(int,input().split()))

a=sum(a1)
b=sum(a2)
c=sum(a3)
d=sum(a4)
e=sum(a5)

res = [a,b,c,d,e]
m = int(res.index(max(res)))+1
print(m,max(res))