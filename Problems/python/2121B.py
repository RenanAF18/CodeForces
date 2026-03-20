t = int(input())
for _ in range(t):
    n = int(input())
    s = input()
    
    dici = {}
    for x in s:
        dici[x] = dici.setdefault(x, 0) + 1
    
    if n % 2 != 0:
        if dici[s[n//2]] == 1:
            print("No")
        else:
            print("Yes")
    else:
        if (dici[s[n//2]] == 1) and (dici[s[n//2 -1]] == 1):
            print("No")
        else:
            print("Yes")


