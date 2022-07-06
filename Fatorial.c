/*Faça uma função que calcule e retorne o produto dos n
primeiros números positivos, onde n deve ser passado como
parâmetro. Ex.: para n=4, a função deve retornar 4*3*2*1=24. Este
valor é conhecido como fatorial de n. Se n não for positivo, a
função deve retornar 1.*/

#include <stdio.h>
long long int fat(int n){
    int cont = n;
    int produto = n;
    if (n < 0){
        return 1;
    }
    while (cont > 1){
        produto = produto * (cont-1);
        cont--;
    }
    return produto;
}


int main()
{
    int n;
    printf("Digite o número para obter o seu fatorial: \n");
    scanf("%d", &n);
    printf("O fatorial de %d vale %lld. \n", n, fat(n));
    
}
