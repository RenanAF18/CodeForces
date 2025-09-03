t = int(input())
for _ in range(t):
    a, b, x, y = map(int, input().split())
    
    if b < a:
        if b == a ^ 1 and a % 2 == 1:
            print(y)
        else:
            print(-1)
    elif a == b:
        print(0)
    else:
        diff = b - a
        
        cost1 = diff * x
    
        if y < x:
            if b - a == 1:
                if a % 2 == 0:
                    print(y)
                else:
                    print(x)
            else:
                if diff % 2 == 0:
                    print((diff//2 * y) + (diff//2 * x))
                else:
                    if a % 2 != 0:
                        print((diff//2 * y) + (diff//2 * x) + x)
                    if a % 2 == 0:
                        print((diff//2 * y) + (diff//2 * x) + y)
        else:
            print(cost1)