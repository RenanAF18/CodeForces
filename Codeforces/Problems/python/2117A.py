t = int(input())
for _ in range(t):
    n, x = map(int,input().split())
    a = [int(x) for x in input().split()]
    can = True
    button = False
    
    for i in range(n):
        if button and (x > 0):
            x -= 1
        elif (a[i] != 0) and (not button):
            button = True
            x -= 1
        elif x == 0:
            if a[i] != 0:
                can = False
                break
    
    if can:
        print("YES")
    else:
        print("NO")
                 