t = int(input())
for _ in range(t):
    n = int(input())
    a = [int(x) for x in input().split()]

    cont0 = 0
    cont1 = 0
    cont2 = 0
    cont3 = 0
    cont5 = 0

    printou = False
    for i in range(n):
        if a[i] == 0:
            cont0 += 1
        if a[i] == 1:
            cont1 += 1
        if a[i] == 2:
            cont2 += 1
        if a[i] == 3:
            cont3 += 1
        if a[i] == 5:
            cont5 += 1
        
        if (cont0 >= 3) and (cont1 >= 1) and (cont2 >= 2) and (cont3 >= 1) and (cont5 >= 1):
            print(i + 1)
            printou = True
            break
    
    if not printou:
        print(0)