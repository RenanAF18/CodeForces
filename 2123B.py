t = int(input())
for i in range(t):
    n, j, k = map(int,input().split())
    a = [int(x) for x in input().split()]
    if k > 1 or a[j-1] == max(a):
        print("YES")
    else:
        print("NO")
