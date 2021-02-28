n = int(input())
a = []

for _ in range(n):
    k = input()
    a.append(k)
a = list(set(a)) #중복제거위해 집합으로 변환한뒤 다시 리스트형
a.sort() # 사전숭 정렬
a.sort(key=lambda x:len(x)) #길이순 정렬

for i in a:
    print(i)