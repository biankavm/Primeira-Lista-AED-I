/*Implemente o algoritmo de ordenação por inserção em uma
função que receba como parâmetros um vetor de inteiros e seu
tamanho. A implementação deve ser feita sem a utilização do
comando “for” da linguagem C.*/


# include <stdio.h>

void ordenaPorInsercao(int vet[], unsigned tam){
    int i, j, pivot;
    i = 1;
    while(i < tam){
        j = i - 1;
        pivot = vet[i];
        while(j >= 0 && vet[j] > pivot){
            vet[j+1] = vet[j];
            j--;
        }
        vet[j+1] = pivot;
        i++;
}
}

void lerVetor(int vet[], unsigned tam){
    int i;
    for(i = 0; i < tam; i++){
        printf("Digite um elemento para a posição [%d]: ", i);
        scanf("%d", &vet[i]);
    }
}

void mostraVetor(int vet[], unsigned tam){
    int i;
    printf("Os elementos do vetor são:\n");
    for(i = 0; i < tam; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}



int main(){
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int vetor[tamanho];
    lerVetor(vetor, tamanho);
    mostraVetor(vetor, tamanho);
    ordenaPorInsercao(vetor, tamanho);
    printf("O vetor ordenado é: \n");
    mostraVetor(vetor, tamanho);
}