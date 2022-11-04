#include <iostream>
using namespace std;

int main(){

    int numeros_lidos;
    int soma_positivos = 0;
    int qtd_negativos = 0;
    int qtd_zeros = 0;

    for (int i = 0; i < 10; i++){
        cout << "Digite um numero: \n";
        cin >> numeros_lidos;
        if (numeros_lidos > 0)
            soma_positivos += numeros_lidos;
        else if (numeros_lidos < 0)
            qtd_negativos++;
        else
            qtd_zeros++;
    }

    cout << "Soma dos numeros positivos lidos: " << soma_positivos << endl;
    cout << "Quantidade de numeros negativos lidos: " << qtd_negativos << endl;
    cout << "Quantidade de zeros lidos: " << qtd_zeros << endl;
    
    return 0;
}