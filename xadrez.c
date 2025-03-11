#include <stdio.h>

int main() {

    //Declara as variaveis;
    int bispo = 1, torre = 1, rainha = 1, cavalo = 1;

    //for executa o printf até o valor do bispo passar de 5, ele aumenta de um em um utilizando o incremento;
    for (bispo; bispo <= 5; bispo++){

        printf("Cima, Direita\n");
    }

    printf("\n");

    //while exibe o printf enquanto o valor da torre estiver menor ou igual a cinco, ele aumenta de um em um utilizando o incremento;
    while (torre <=5){

        printf("Direita\n");

        torre++;
    }

    printf("\n");

    //do while exibe o printf enquanto rainha for menor que oito ou igual, rainha aumenta de um em um utilizando o incremento;
    do {

        printf("Esquerda\n");
        rainha++;
    } while (rainha <=8);

    printf("\n");

    //Loops aninhados para simular a movimentação do cavalo, for roda uma vez enquanto while executa completamente a cada uma execução do for
    for (cavalo; cavalo <= 1; cavalo++) {

        int i = 0;
        while (i < 2){
            printf("Baixo\n");
            i++;
        }
        printf("Esquerda\n");
        printf("\n");
    }
    
    return 0;
}
