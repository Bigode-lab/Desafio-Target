import json

def Extraindo_faturamento_dos_dias_validos(arquivo):
    with open(arquivo, 'r') as f:
        dados = json.load(f)

    # Extraindo os valores de faturamento
    faturamento_diario = []

    for item in dados:
        if item['valor'] > 0:
            faturamento_diario.append(item['valor'])

    return faturamento_diario


def calculando_dias_acima_da_media(faturamento_diario):
    media_mensal = sum(faturamento_diario) / len(faturamento_diario)
    dias_acima_da_media = 0

    for valor in faturamento_diario:
        if valor > media_mensal:
            dias_acima_da_media += 1

    return dias_acima_da_media



arquivo_json = 'faturamento.json'

dados_tratados = Extraindo_faturamento_dos_dias_validos(arquivo_json)


if not dados_tratados:
    print(f'Nao tivemos faturamentos validos este mes')
else:
    menor_faturamento = min(dados_tratados)
    maior_faturamento = max(dados_tratados)
    dias_acima_media = calculando_dias_acima_da_media(dados_tratados)
    print(f'Menor faturamento: R$ {menor_faturamento:.2f}')
    print(f'Maior faturamento: R$ {maior_faturamento:.2f}')
    print(f'Dias com faturamento acima da média: {dias_acima_media}')