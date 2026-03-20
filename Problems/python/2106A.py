t = int(input())
for _ in range(t):
    n = int(input())
    s = input()
    a = []
    for c in s:
        a.append(int(c))
    resp = 0
    aa = a.copy()
    for i in range(n):
        if aa[i] == 0:
            aa[i] = 1
        elif aa[i] == 1:
            aa[i] = 0
        resp += aa.count(1)
        aa = a.copy()
    
    print(resp)