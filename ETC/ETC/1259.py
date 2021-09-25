while True:
    n = input()
    r = ''.join(reversed(n))
    if n == '0':
        break
    if n == r:
        print("yes")
    else:
        print("no")