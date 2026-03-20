t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))

    cont = 0
    hike = 0
    for i in range(n):
        if cont == k:
            hike += 1
            cont = 0
            continue
        elif a[i] == 0:
            cont += 1
        else:
            cont = 0
    if cont == k:
        hike += 1
    print(hike)