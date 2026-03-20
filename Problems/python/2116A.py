t = int(input())
for _ in range(t):
    a,b,c,d = map(int,input().split())
    if a >= b:
        if c >=d:
            print("Gellyfish")
        elif c < d:
            if b > c:
                print("Flower")
            elif b <= c:
                print("Gellyfish")
    elif a < b:
        if c < d:
            print("Flower")
        elif c >= d:
            if a >= d:
                print("Gellyfish")
            elif a < d:
                print("Flower")