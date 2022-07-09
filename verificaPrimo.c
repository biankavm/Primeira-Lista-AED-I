/* Faça uma função que receba como parâmetro um número inteiro positivo e retorne verdadeiro
caso o número seja primo. A função deve retornar falso caso o contrário. */
#include <stdio.h>
char verificaPrimo(unsigned n){
    if (n == 2 || n == 3){ // 2 e 3 são os menores números primos existentes (primos elementares)
        return 1;
    }
    else if(n != 1 && n % 2 != 0 && n % 3 != 0){ // Um número primo não pode ser 1, divisível por 2 e divisível por 3.
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    unsigned n;
    printf("Digite um número para verificarmos se ele é primo: ");
    scanf("%d", &n);
    if (verificaPrimo(n)){
        printf("O valor %d é primo!", n);
    }
    else{
        printf("O valor %d não é primo.", n);
    }



}