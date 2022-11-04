using System;

class MainClass {
    public static void Main (string[] args){

        int numeros_lidos;
        int soma_positivos = 0;
        int qtd_negativos = 0;
        int qtd_zeros = 0;

        for (int i = 0; i < 10; i++){
            Console.WriteLine("Digite um numero: ");
            numeros_lidos = int.Parse(Console.ReadLine());
            if (numeros_lidos > 0)
                soma_positivos += numeros_lidos;
            else if (numeros_lidos < 0)
                qtd_negativos++;
            else
                qtd_zeros++;
        }

        Console.WriteLine("Soma dos numeros positivos lidos: " + soma_positivos);
        Console.WriteLine("Quantidade de numeros negativos lidos: " + qtd_negativos);
        Console.WriteLine("Quantidade de zeros lidos: " + qtd_zeros);
    }

}

