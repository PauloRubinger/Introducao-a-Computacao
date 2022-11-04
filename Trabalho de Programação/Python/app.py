i = 0
soma_positivos = 0
qtd_negativos = 0
qtd_zeros = 0

while i < 10:
    numero = int(input("Digite um numero: "))
    if numero > 0:
        soma_positivos += numero
    elif numero < 0:
        qtd_negativos += 1
    else:
        qtd_zeros += 1
    i += 1
    
print("Soma dos numeros positivos lidos: {0}".format(soma_positivos))
print("Quantidade de numeros negativos lidos: {0}".format(qtd_negativos))
print("Quantidade de zeros lidos: {0}".format(qtd_zeros))
