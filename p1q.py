def calculaquestao():
    questoes = 0
    while True:
        entrada = input()
        if entrada == "*":
            return questoes
        else:
            questoes += int(entrada)

def main():
    somaTotal = 0
    while True:
        entrada = input()
        if entrada == "**":
            break
        num_questoes = calculaquestao()
        somaTotal += num_questoes
        print(f"{entrada}: {num_questoes}")

    print("---")
    print(f"Total de novas questões: {somaTotal}")
main()