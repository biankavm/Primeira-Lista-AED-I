/*Faça uma função que retorna verdadeiro caso uma matriz de ordem NxN seja uma matriz identidade, isto é,
com 1's na diagonal principal e 0's nas demais posições.*/

# define N 5
# include <stdio.h>
char identidade(int mat[N][N]){
        int lin, col;
        for(lin = 0; lin < N; lin++){
            for (col = 0; col < N; col++){
                if (lin == col){
                    if (mat[lin][col] != 1){
                        return 0;
                    }
                }
                else{
                    if(mat[lin][col] != 0){
                        return 0;
                    }
                }
            }
        }
        return 1;

}

void lerMatriz(int mat[N][N]){
    int lin, col;
    for(lin = 0; lin < N; lin++){
        for(col = 0; col < N; col++){
            printf("Digite um elemento para a posição [%d][%d]: ", lin, col);
            scanf("%d", &mat[lin][col]);
        }
    }
}

int main(){
    int matriz[N][N];
    lerMatriz(matriz);
    if (identidade(matriz)){
        printf("Esta é uma matriz identidade!");
    }
    else{
        printf("Esta não é uma matriz identidade.");
    }
}