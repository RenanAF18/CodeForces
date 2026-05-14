t = int(input())
for _ in range(t):
    n = int(input())
    s = input()

    cont = 0
    if s[0] == '1':
        cont += 1
        for i in range(1,len(s)):
            if s[i] != s[i-1]:
                cont += 1
    else:
        for i in range(1,len(s)):
            if s[i] != s[i-1]:
                cont += 1

    print(cont)