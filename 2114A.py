t = int(input())
for _ in range(t):
    s = input()
    ss = int(s)

    a = int(ss**0.5)
    if a * a == ss:
        print(0, a)
    else:
        print(-1)