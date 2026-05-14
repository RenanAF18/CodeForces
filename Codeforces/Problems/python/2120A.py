t = int(input())

for _ in range(t):
    l1, b1, l2, b2, l3, b3 = map(int, input().split())

    ok = False

    if l1 == l2 and l2 == l3:
        if l1 == b1 + b2 + b3 or (b1 == b2 + b3 and 2 * l1 == b1):
            ok = True
    elif l2 == l3:
        if b2 + b3 == b1 and b1 == l2 + l1:
            ok = True

    if not ok:
        l1, b1 = b1, l1
        l2, b2 = b2, l2
        l3, b3 = b3, l3

        if l1 == l2 and l2 == l3:
            if l1 == b1 + b2 + b3 or (b1 == b2 + b3 and 2 * l1 == b1):
                ok = True
        elif l2 == l3:
            if b2 + b3 == b1 and b1 == l2 + l1:
                ok = True

    if ok:
        print("YES")
    else:
        print("NO")
