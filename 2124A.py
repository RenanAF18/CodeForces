
t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    if all(x == a[0] for x in a) or n == 1 or a == sorted(a):
        print("NO")
    else:
        encontrou = False
        for i in range(n):
            if encontrou:
                break
            for j in range(i + 1, n):
                if a[i] > a[j]:
                    print("YES")
                    print(2)
                    print(a[i], a[j])
                    encontrou = True
                    break

        if not encontrou:
            print("NO")