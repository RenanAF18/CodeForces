t = int(input())
for _ in range(t):
    n = int(input())
    a = [int(x) for x in input().split()]
    
    a.sort(reverse=True)
    cont = 0
    for i in range(0,len(a), 2):
        cont += a[i]
        
    print(cont)