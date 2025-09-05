t = int(input())
for _ in range(t):
    out = ''
    n, k = map(int, input().split())
    out += '0' * (n-k)
    out += '1' * k
    print(out)