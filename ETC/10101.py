a = int(input())
b = int(input())
c = int(input())

if a == b == c == 60:
    print("Equilateral")
elif a + b + c == 180:
    if a is b or a is c or b is c:
        print("Isosceles")
    else:
        print("Scalene")
else:
    print("Error")