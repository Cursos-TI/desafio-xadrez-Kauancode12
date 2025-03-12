#include <stdio.h>

/*Função que utiliza de loops aninhados, e quando chamada no código
 executa repetições de acordo com o número inserido nos parenteses*/
void recursiveLoop1(int b) {
    
    for (int x = 5 ; x > 0; x-- ) {
            printf("Cima\n");

        int b = 1;
        while (b > 0){
            printf("Direita\n");
            b--;
        }

    }

}

//Função que será executada quando chamada posteriormente no código
void recursiveLoop2(int t) {
    if (t > 0) {
        printf("Direita\n");
        recursiveLoop2(t - 1);
    }
}

void recursiveLoop3(int r) {
    if (r > 0) {
        printf("Esquerda\n");
        recursiveLoop3(r - 1);
    }
}

int main() {

    //Declara as variaveis;
    int bispo = 5, torre = 5, rainha = 8;

    //Chama a função escrita anteriormente que a partir de um valor executa "x" repetições
    recursiveLoop1(bispo);
        printf("\n");

    recursiveLoop2(torre);
        printf("\n");

    recursiveLoop3(rainha);
        printf("\n");

    //Loops aninhados para simular a movimentação do cavalo, declara duas variaveis locais
    for (int cavalo = 1, i = 2; cavalo > 0; cavalo--) {

        while (i > 0){
            printf("Cima\n");
            i--;

        }

        printf("Direita\n");
        printf("\n");
    }

        

  
    
    return 0;
}
