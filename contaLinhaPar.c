/*Faça uma função que receba como parâmetro uma matriz de inteiros de
ordem N x N. A função deve retornar o número de linhas que começam com
valor par (contar número de linhas que têm valores pares na 1a coluna e retornar
o total computado). */

# define N 3
# include <stdio.h>
int linhaPar(int mat[N][N]){
    int lin, col, cont = 0;
    for (lin = 0; lin < N; lin++){
        for (col = 0; col < N; col++){
            if (col == 0 && ((mat[lin][col] % 2) == 0)){
                cont++;
            }
        }
    }
    return cont;
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
    printf("O número de linhas que começam com número par é: %d", linhaPar(matriz));

}
