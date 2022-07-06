/*Faça uma função que receba como parâmetro um texto,
armazenado em um vetor de caracteres de 40 posições e retorne
verdadeiro caso o texto contenha a sequência de caracteres
“UFAM” em posições contíguas. Ex: “eu estudo na UFAM,
Universidade Federal do Amazonas” passado como parâmetro
retornaria verdadeiro. (P 2006)*/

# include <stdio.h>

char achaString(char frase[100]){
    char chave[4] = "UFAM";
    int i = 0, cont = 0;
    while(frase[i] != '\0'){
        if(frase[i] == chave[cont]){
            cont++;
            i++;
            if (cont == 4){
                return 1;
            }
        }
        else{
            cont = 0;
            i++;
        }
    }
    return 0;
    }


int main(){
    char frase[100] = "Eu estudo na UFAM, Universidade Federal do Amazonas";
    if(achaString(frase)){
        printf("Achei.");
    }
    else{
        printf("Não achei.");
    }

}