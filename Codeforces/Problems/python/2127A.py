t = int(input())
for _ in range(t):
    n = int(input())
    s = list(map(int, input().split()))
    pode = True
    ss = set()

    for i in s:
        ss.add(i)

    if 0 in ss:
        print("No")
    elif len(ss) == 1:
        print("Yes")
    elif len(ss) == 2:
        if -1 in ss:
            print("Yes")
        else:
            print("No")
    else:
        print("No")