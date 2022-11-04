import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        
        int numeros_lidos;
        int soma_positivos = 0;
        int qtd_negativos = 0;
        int qtd_zeros = 0;

        for (int i = 0; i < 10; i++){
            System.out.println("Digite um numero: ");
            Scanner entrada = new Scanner(System.in);
            numeros_lidos = entrada.nextInt();
            if (numeros_lidos > 0)
                soma_positivos += numeros_lidos;
            else if (numeros_lidos < 0)
                qtd_negativos++;
            else
                qtd_zeros++;
            
        }

        System.out.println("Soma dos numeros positivos lidos: " + soma_positivos);
        System.out.println("Quantidade de numeros negativos lidos: " + qtd_negativos);
        System.out.println("Quantidade de zeros lidos: " + qtd_zeros);
    }
    
}
