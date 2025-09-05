t = int(input())
for _ in range(t):
    n = int(input())
    s = list(map(int,input().split()))
    print(sum(s) + s.count(0))