/*Faça uma função que receba como parâmetro um inteiro N e
retorne a soma dos quadrados de todos os números inteiros
positivos de valor menor ou igual a N. Calcule iterativamente, sem
usar a fórmula para calcular o valor.*/


#include <stdio.h>
int somaQuadrados(int n){
    int soma = 0;
    if (n <= 0){
        return 0;
    }
    while (n > 0){
        soma = soma + (n*n);
        n--;
    }
    return soma;
}

int main(){
    int numero;
    printf("Digite um número para calcularmos a soma das potências:\n");
    scanf("%d", &numero);
    printf("A soma dos quadrados de todos os inteiros positivos até %d vale: %d.", numero, somaQuadrados(numero));
}