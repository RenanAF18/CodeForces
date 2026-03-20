t = int(input())
for _ in range(t):
    x = int(input())
    x = str(x)
    a = []
    for c in x:
        a.append(int(c))
    
    print(min(a))
