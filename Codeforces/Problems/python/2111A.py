t = int(input())
for _ in range(t):
    a = b = c = 0
    x = int(input())
    cont = 0
    
    while min(a, b, c) < x:
        if a <= b and a <= c:
            a = min(b, c) * 2 + 1
		
        elif (b <= a and b <= c):
            b = min(a, c) * 2 + 1
		
        else:
            c = min(a, b) * 2 + 1
		
        cont += 1
    print(cont)