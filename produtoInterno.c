#include <stdio.h>
#define N 3
void produtoInterno(int mat[N][N], int v[N]){
    int i, j, linha;
    int p1 = 0, p2, cont = 0;
    for (i = 0; i < N; i++){
        p2 = 0;
        for (j = i + 1; j < N; j++){
            p2 = p2 + (mat[i][j] * v[j]);
        }
        if (p2 > p1){
            p1 = p2; // atualiza o maior produto interno.
            linha = i; // salva a linha de maior produto interno.
        }   
    }
    while(cont < N){
        v[cont] = mat[linha][cont]; // insere no vetor os elementos da linha.
        cont++;
    }
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

void lerVetor(int vet[], unsigned tam){
    int i;
    for (i = 0; i < tam; i++){
        printf("Digite o elemento para a posição [%d]: ", i);
        scanf("%d", &vet[i]);
    }
}

void mostraVetor(int vet[], unsigned tam){
    int i;
    for (i = 0; i < tam; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main(){
    int m[N][N];
    int v[N];
    lerMatriz(m);
    lerVetor(v, N);
    produtoInterno(m, v);
    printf("A linha que da matriz que fornece o maior produto interno com o vetor tem os valores: ");
    mostraVetor(v, N);
}