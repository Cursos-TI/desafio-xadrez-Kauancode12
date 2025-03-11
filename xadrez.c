#include <stdio.h>

int main() {

    //Declara as variaveis;
    int bispo = 1;
    int torre = 1;
    int rainha = 1;

    //for executa o printf até o valor do bispo passar de 5, ele aumenta de um em um utilizando o incremento;
    for (bispo; bispo <= 5; bispo++){

        printf("Cima, Direita\n");
    }

    //while exibe o printf enquanto o valor da torre estiver menor ou igual a cinco, ele aumenta de um em um utilizando o incremento;
    while (torre <=5){

        printf("Direita\n");

        torre++;
    }

    //do while exibe o printf enquanto rainha for menor que oito ou igual, rainha aumenta de um em um utilizando o incremento;
    do {

        printf("Esquerda\n");
        rainha++;
    } while (rainha <=8);
    
    return 0;
}
