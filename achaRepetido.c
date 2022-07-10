/*Faça uma função que receba como parâmetro um vetor de números inteiros e o seu tamanho, considerando
que o vetor não foi fornecido ordenado. A função deve descobrir qual o número que mais se repete e retornar
esse número. Em hipótese alguma a função deve gerar um novo vetor para descobrir qual número mais se repete;*/

#include <stdio.h>

int achaRepetido(int vet[], unsigned tam){
    int i, j, repetido, pivot;
    unsigned cont1, cont2;
    cont1 = 1;
    for(i = 0; i < tam; i++){
        pivot = vet[i];
        cont2 = 1; // 
        for (j = i + 1; j < tam; j++){
            if (vet[j] == pivot){
                cont2++;
            }
            if(cont2 > cont1){
                cont1 = cont2;
                repetido = pivot;
            } 
        }
    }
    return repetido;
}

void lerVetor(int vet[], unsigned tam){
    int i;
    for (i = 0; i < tam; i++){
        printf("Digite o número para a posição [%d]: ", i);
        scanf("%d", &vet[i]);
    }
    printf("\n");
}

void mostraVetor(int vet[], unsigned tam){
    int i;
    for (i = 0; i < tam; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main(){
    int tamanho;
    printf("Entre com o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int vet[tamanho];
    lerVetor(vet, tamanho);
    printf("O vetor digitado foi: ");
    mostraVetor(vet, tamanho);
    printf("\nO número que mais se repete é o %d.", achaRepetido(vet, tamanho));
}