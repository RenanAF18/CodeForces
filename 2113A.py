t = int(input())
for _ in range(t):
    k, a, b, x, y = map(int, input().split())

    cur1 = 0
    cur1 += max((k - a + x) // x, 0)
    k1 = k - max((k - a + x) // x, 0) * x
    cur1 += max((k1 - b + y) // y, 0)

    cur2 = 0
    cur2 += max((k - b + y) // y, 0)
    k2 = k - max((k - b + y) // y, 0) * y
    cur2 += max((k2 - a + x) // x, 0)

    print(max(cur1, cur2))
