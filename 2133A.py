t = int(input())
for _ in range(t):
    n = int(input())
    a = [int(x) for x in input().split()]

    if len(a) == len(set(a)):
        print("NO")
    else:
        print("YES")