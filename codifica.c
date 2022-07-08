/*Considere que o método de codificação run length codifica cada sequência de
uma ou mais ocorrências consecutivas de um número X dentro de um vetor
como um par de números (X,Y) (em posições consecutivas), onde X é o numero
que se repete na sequência e Y a quantidade repetições. Faça uma função que,
dado um vetor de números e seu tamanho, codifique os valores do vetor
utilizando run length e retorne a quantidade de elementos úteis no vetor
codificado. A codificação deve ser escrita em um segundo vetor que também
será passado como parâmetro. Considere que há espaço suficiente para receber o
resultado no vetor de saída.

Exemplo: entrada: 3 3 3 3 3 3 3 3 3 3 3 8 8 8 4 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7
Saída: 3 11 8 3 4 1 7 19
Valor de retorno: 8 */

#include <stdio.h>

int codifica(int v1[], unsigned tam, int v2[]){
    int i = 0, j = 0;
    int cont = 1;
    while( i < tam){
        cont = 1; // cont deve ser atualizado para 1 novamente, de modo que a mesma análise continue até o fim do vetor.
        while(v1[i] == v1[i + 1]){ // a cada repetição do número adicionamos no contador.
            cont++;
            i++;
        }
        v2[j] = v1[i]; // quando o número parar de se repetir, ele deve ser adicionado no segundo vetor.
        v2[j + 1] = cont; // seguido do número, adicionamos o número de vezes que ele apareceu.
        j = j + 2; // j avança duas posições, pois duas anteriores já foram ocupadas.
        i++;
    }

return j;
}

void lerVetor(int vet[], unsigned tam){
    int i = 0;
    for(i = 0; i < tam; i++){
        printf("Entre com o elemento para a posição [%d]: ", i);
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
    printf("Entre com o tamanho da sequência: ");
    scanf("%d", &tamanho);
    int vetor[tamanho];
    int amostra[tamanho];
    printf("Entre os números que deseja codificar: ");
    lerVetor(vetor, tamanho);
    printf("A saída codificada é: ");
    mostraVetor(amostra, codifica(vetor, tamanho, amostra));
    printf("O número de elementos da saída codificada é: %d.\n", codifica(vetor, tamanho, amostra));

}