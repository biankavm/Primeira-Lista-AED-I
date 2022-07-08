/*Encontrar o elemento que mais se repete em um vetor.*/

#include <stdio.h>

int achaRepetido(int vet[], unsigned tam){
    int i, j, repetido, c1, c2;
    c2 = 0;
    for(i = 0; i < tam; i++){
        c1 = 0; // inicializa o primeiro contador
        for(j = i+1; j < tam; j++){
            if (vet[i] == vet[j]){
                c2++; // add no contador 2
            }
            if (c2> c1){ // se o 2 for maior que o 1
                c1 = c2; // o primeiro recebe o valor do segundo e o repetido é o valor dessa posição.
                repetido = vet[i];
            }
            }
        }
    return repetido;
}

void lerVetor(int vet[], unsigned tam){
    int i;
    for (i=0; i< tam; i++){
        printf("Digite um elemento para a posição [%d]: ", i);
        scanf("%d", &vet[i]);
    }
    printf("\n");
}

void mostraVetor(int vet[], unsigned tam){
    int i;
    for (i = 0; i<tam;i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}




int main()
{
    unsigned tam;
    printf("Entre com o tamanho do vetor: ");
    scanf("%d", &tam);
    int vetor[tam];
    lerVetor(vetor, tam);
    mostraVetor(vetor,tam);
    printf("O elemento que mais se repete é %d.", achaRepetido(vetor, tam));

    return 0;
}