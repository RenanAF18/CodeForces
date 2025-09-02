t = int(input())
for _ in range(t):
    a, x,y = map(int, input().split())
    
    if abs(a - x) == abs(a - y):
        print("NO")
    else:
        print("YES")