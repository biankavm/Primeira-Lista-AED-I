/*Faça uma função que receba como parâmetro um vetor com n
inteiros e inverta as posições dos elementos de maneira que o
primeiro elemento troque de valor com o último, o segundo com o
penúltimo e assim por diante. (inverter as posições dos elementos
do vetor)*/
#include <stdio.h>
void inverteVetor(int vet[], unsigned tam){
    int inicio, fim, tmp;
    inicio = 0;
    fim = tam-1;
    while(inicio < fim){
        tmp = vet[inicio];
        vet[inicio] = vet[fim];
        vet[fim] = tmp;
        inicio ++;
        fim--;
    }
}

void mostraVetor(int vet[], unsigned tam){
    int i;
    for(i = 0; i < tam; i++){
        printf("%d; ", vet[i]);
    }
    printf("\n");
}


int main(){
    int vet[6] = {1,3,2,9,6};
    mostraVetor(vet, 6);
    inverteVetor(vet, 6);
    mostraVetor(vet,6);

}

