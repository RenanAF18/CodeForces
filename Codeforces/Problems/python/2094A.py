t = int(input())
for _ in range(t):
    out = ''
    a = [x for x in input().split()]
    
    for s in a:
        out += s[0]
    
    print(out)