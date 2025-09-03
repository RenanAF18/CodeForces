t = int(input())
for _ in range(t):
    n,m = map(int,input().split())

    if n == 1 or m == 1 or (n == m == 2):
        print("NO")
    else:
        print("YES")