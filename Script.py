import requests
import random

def questoes_aleatorias():
    # Pega a lista de problemas do Codeforces
    url = "https://codeforces.com/api/problemset.problems"
    resposta = requests.get(url).json()

    if resposta["status"] != "OK":
        print("Erro ao acessar API do Codeforces")
        return
    
    problemas = resposta["result"]["problems"]

    # Função para filtrar problemas por rating
    def filtrar(min_rating, max_rating=None):
        filtrados = []
        for p in problemas:
            if "rating" in p:
                if max_rating:
                    if min_rating <= p["rating"] <= max_rating:
                        filtrados.append(p)
                else:
                    if p["rating"] == min_rating:
                        filtrados.append(p)
        return filtrados

    # Filtra cada faixa
    faixa1 = filtrar(800, 800)
    faixa2 = filtrar(800, 800)
    faixa3 = filtrar(800)

    # Sorteia uma questão de cada
    escolhidos = [
        random.choice(faixa1) if faixa1 else None,
        random.choice(faixa2) if faixa2 else None,
        random.choice(faixa3) if faixa3 else None,
    ]

    # Mostra os resultados
    for i, problema in enumerate(escolhidos, start=1):
        if problema:
            contest_id = problema["contestId"]
            index = problema["index"]
            nome = problema["name"]
            dificuldade = problema["rating"]
            url_problema = f"https://codeforces.com/problemset/problem/{contest_id}/{index}"

            print(f"Questão {i}: {nome}")
            print(f"  Dificuldade: {dificuldade}")
            print(f"  Link: {url_problema}\n")
        else:
            print(f"Questão {i}: Nenhuma encontrada nessa faixa\n")


# Executa
questoes_aleatorias()
