#include <stdio.h>
#define N 3


float mediaParesMatriz(int mat[N][N]){
    int i, j, soma = 0, cont = 0;
    float media;
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            if (mat[i][j] % 2 == 0){
                soma = soma + mat[i][j];
                cont++;
            }
        }
    }
    media =soma / cont;
    return media;
}

int lerMatriz(int mat[N][N]){
    int lin, col;
    for(lin = 0; lin < N; lin++){
        for(col = 0; col < N; col++){
            printf("Digite um elemento para a posição [%d][%d]: ", lin, col);
            scanf("%d", &mat[lin][col]);
        }
    }
}

int mostraMatriz(int mat[N][N]){
    int lin, col;
    for(lin = 0; lin < N; lin++){
        for (col = 0; col < N; col++){
            printf("%d ", mat[lin][col]);
        }
        printf("\n");
    }
}

int main(){
    int matriz[N][N];
    lerMatriz(matriz);
    mostraMatriz(matriz);
    printf("A média dos numeros pares da matriz é igual a: %.2f.", mediaParesMatriz(matriz));
}
