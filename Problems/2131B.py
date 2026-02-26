t = int(input())
for _ in range(t):
    n = int(input())
    sol = [-1,3] * (n//2)
    
    
    if n % 2 != 0:
        sol.append(-1)
    else:
        sol[-1] = 2
    print(*sol)  