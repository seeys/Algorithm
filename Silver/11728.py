import sys
n,m = map(int, sys.stdin.readline().split())
arr1 = list(map(int, sys.stdin.readline().split()))
arr2 = list(map(int, sys.stdin.readline().split()))
res = sorted(arr1+ arr2)
print(' '.join(map(str,res)))
