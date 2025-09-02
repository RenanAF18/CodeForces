t = int(input())
for _ in range(t):
    n, a, b = map(int,input().split())
    if a <= b:
        if b % 2 == n % 2:
            print("Yes")
        else:
            print("No")
    else:
        if n % 2 == a % 2 and n % 2 == b % 2:
            print("Yes")
        else:
            print("No")