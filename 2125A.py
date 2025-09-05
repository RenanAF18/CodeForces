t = int(input())

for _ in range(t):
    a = input()
    array = sorted(a, reverse=True)
    print("".join(array))