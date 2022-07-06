/*Faça uma função que receba como parâmetro um vetor de
inteiros e seu tamanho. A função deve modificar o vetor de
maneira que:
a) Elementos com valor original menor ou igual a 0 fiquem com o
valor -2*/

#include <stdio.h>
void alteraVetor(int vet[], unsigned tam){
    int i;
    for(i = 0; i < tam; i++){
        if(vet[i] <= 0){
            vet[i] = -2;
        }
        else if(vet[i] >= 1 && vet[i] <= 5){
            vet[i] = -1;
        }
        else{
            vet[i] = 0;
        }
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
    int vet[5] = {-9,24,4,36,-6};
    mostraVetor(vet, 5);
    alteraVetor(vet, 5);
    mostraVetor(vet, 5);


}