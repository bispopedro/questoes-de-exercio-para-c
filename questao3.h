#include <stdio.h>
//questao 3
int main() {
    short idd;
    int cont;
    long deposi;

    printf("Digite a sua idade: ");
    scanf("%hd", &idd);

    printf("Digite o número da sua conta: ");
    scanf("%d", &cont); 

    printf("Digite o valor que você deseja depositar: ");
    scanf("%ld", &deposi); 

    printf("\nIdade: %hd\nConta: %d\nValor a depositar: %ld\n", idd, cont, deposi);

    return 0;
}
