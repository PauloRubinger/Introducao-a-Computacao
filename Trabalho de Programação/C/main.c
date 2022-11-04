#include <stdio.h>
#include <stdlib.h>

int main(){

    int numeros_lidos;
    int soma_positivos = 0;
    int qtd_negativos = 0;
    int qtd_zeros = 0;

    for (int i = 0; i < 10; i++){
        printf("Digite um numero: \n");
        scanf("%d", &numeros_lidos);
        if (numeros_lidos > 0)
            soma_positivos += numeros_lidos;
        else if (numeros_lidos < 0)
            qtd_negativos++;
        else
            qtd_zeros++;
    }

    printf("Soma dos numeros positivos: %d \n", soma_positivos);
    printf("Quantidade de numeros negativos lidos: %d \n", qtd_negativos);
    printf("Quantidade de zeros lidos: %d \n", qtd_zeros);

    return 0;
}