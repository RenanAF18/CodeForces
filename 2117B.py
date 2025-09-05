t = int(input())
for _ in range(t):
    n = int(input())
    out = []
    for i in range(2,n+1,1):
        out.append(i)
    out.append(1)
    print(*out)