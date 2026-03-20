def organiziaPorDois(a, valor1, valor2):
    cont1 = 0
    cont2 = 0
    for i in a:
        if i == valor1:
            cont1 += 1
        else:
            cont2 += 1
    
    for i in range(len(a)):
        if i < cont1:
            a[i] = valor1
        else:
            a[i] = valor2


def main():
    array = ["a", "a", "b", "a", "b"]
    organiziaPorDois(array, "b", "a")
    assert array == ['b', 'b', 'a', 'a', 'a']

main()