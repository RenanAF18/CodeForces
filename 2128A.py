t = int(input())
for _ in range(t):
    n,c = map(int, input().split())
    s = list(map(int,input().split()))
    s.sort(reverse=True)
    while True:
        removeu = False
        for i in range(len(s)):
            if s[i] <= c:
                removeu = True
                s.pop(i)
                break
        for i in range(len(s)):
            s[i] = s[i] * 2
        if not removeu:
            print(len(s))
            break