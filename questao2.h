#include <stdio.h>

int main() {
    int pun;
    printf("Numero | Quadrado | Cubo\n") ;
   printf("¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n " );
     

    for (pun = 0; pun<= 10; pun++) {
        printf("[ %d ] | [ %d ]   | [ %d ] \n", pun, pun*pun, pun*pun*pun);
    }

    return 0;
}
