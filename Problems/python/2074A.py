def eh_quadrado(lista):
    if lista[0] == lista[1] and lista[1] == lista[2] and lista[2] == lista[3]:
        return "Yes"
    else:
        return "No"

t = int(input())
for _ in range(t):
    a= list(map(int, input().split()))
    print(eh_quadrado(a))
