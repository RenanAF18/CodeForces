t = int(input())
for _ in range(t):
    n, s = map(int, input().split())
    a = list(map(int, input().split()))
    
    left, right = a[0], a[-1]
    
    ans = (right - left) + min(abs(s - left), abs(s - right))
    print(ans)