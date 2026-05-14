t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
            
    cont = 1
    for i in range(n):
        if a[i] - b[i] > 0:
            cont += a[i] - b[i]
    
    print(cont)