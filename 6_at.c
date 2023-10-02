#include <stdio.h>

int main() {
    int num[10];

    for(int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    int maior = 0;
    int menor = 9999;

    for(int i = 0; i < 10; i++) {
        if(num[i] > maior) {
            maior = num[i];
        }

        if(num[i] < menor) {
            menor = num[i];
        }
    }

    printf("MENOR %d \n", menor);
    printf("MAIOR %d", maior);

    return 0;
}