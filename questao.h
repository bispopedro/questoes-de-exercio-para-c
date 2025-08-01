#include <stdio.h>
// QUESTÃO DOS NUMEROS SEPARADOS 
int main() {
    int num;
    int nu1, nu2,nu3, nu4, nu5;
    int res1, res2, res3;

    printf("Digite um número de 5 dígitos: ");
    scanf("%d", &num);
    nu1 = num /10000;
    res1 = num % 10000;
    nu2 = res1 / 1000;
    res2 = res1 % 1000;
    nu3 = res2 / 100;
    res3 = res2 % 100;
    nu4 = res3 / 10;
    nu5 = res3 % 10;
   printf("Dígitos: %d   %d   %d   %d   %d\n", nu1, nu2, nu3, nu4, nu5);

    return 0;
}
