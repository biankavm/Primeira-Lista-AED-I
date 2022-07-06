/*Faça uma função que receba como parâmetros um nome e uma
letra. A função deve retornar a quantidade de vezes que a letra
passada como parâmetro ocorre no nome. Durante a contagem
considere que letras maiúsculas e minúsculas são iguais.*/
#include <stdio.h>
int contaLetra(char nome[], char letra){
    int i, cont;
    i = 0;
    cont = 0;
    while(nome[i] != '\0'){
        if (nome[i] == letra || nome[i] == letra+32 || nome[i] == letra-32){
            cont++;
            i++;
        }
        else{
            i++;
        }
    }
    return cont;
}

int main(){
    char nome[20];
    char letra;
    printf("Digite um nome: \n");
    scanf("%[^\n]%*c", nome);
    printf("Digite uma letra para ser buscada: \n");
    scanf("%c", &letra);
    printf("A letra %c aparece %d vezes no nome %s.", letra, contaLetra(nome, letra), nome);

}