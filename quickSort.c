/*Implementação do Algoritmo do Quick-Sort para a ordenação de elementos em um vetor.*/

#include <stdio.h>

void quickSortR( int vet[], int inicio, int fim){
    int i, j, tmp, pivot;
    if (inicio < fim){
        i = inicio;
        j = fim;
        pivot = vet[(inicio+fim)/2];
        while(i <= j){
            while(vet[i] < pivot){ i++;}
            while (vet[j] > pivot){ j--;}
            if (i <= j){
                tmp = vet[i];
                vet[i] = vet[j];
                vet[j] = tmp;
                i++;
                j--;
            }
        }
        quickSortR(vet, inicio, j);
        quickSortR(vet, i, fim);
    }
}

void quickSort(int vet[], unsigned tamanho){
    quickSortR(vet, 0, tamanho);
}

void lerVetor(int vet[], unsigned tamanho){
    int i;
    for(i = 0; i < tamanho; i++){
        printf("Digite um elemento para a posição [%d]: ", i);
        scanf("%d", &vet[i]);
    }
}

void mostraVetor(int vet[], unsigned tamanho){
    int i;
    for (i = 0; i <  tamanho; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main(){
    unsigned tamanho;
    printf("Digite o tamanho do vetor que deseja ordenar: ");
    scanf("%d", &tamanho);
    int vet[tamanho];
    lerVetor(vet, tamanho);
    printf("O vetor digitado foi: \n");
    mostraVetor(vet, tamanho);
    printf("O vetor ordenado é: \n");
    quickSort(vet, tamanho);
    mostraVetor(vet, tamanho);





}