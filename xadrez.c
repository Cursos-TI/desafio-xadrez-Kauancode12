#include <stdio.h>

void recursiveLoop1(int b) {
    if (b > 0) {
        printf("Cima, Direita\n");
        recursiveLoop1(b - 1);
    }
}

void recursiveLoop2(int t) {
    if (t > 0) {
        printf("Direita\n");
        recursiveLoop2(t - 1);
    }
}

void recursiveLoop3(int r) {
    if (r > 0) {
        printf("Direita\n");
        recursiveLoop3(r - 1);
    }
}

int main() {

    //Declara as variaveis;
    int bispo = 5, torre = 5, rainha = 8;

    recursiveLoop1(bispo);
        printf("\n");

    recursiveLoop2(torre);
        printf("\n");

    recursiveLoop3(rainha);
        printf("\n");

        for(int c = 1, cavalo = 2; cavalo > 0; cavalo--, c--) {
           
        }

        

  
    
    return 0;
}
