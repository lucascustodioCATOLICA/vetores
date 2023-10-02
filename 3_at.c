#include <stdio.h>

int main() {
    int num[10];
    int quadrado[10];

    for(int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < 10; i++) {
        quadrado[i] = num[i]*num[i];
    }

    printf("------------------- \n");

    for(int i = 0; i < 10; i++) {
        printf("%d \n", quadrado[i]);
    }

    return 0;
}