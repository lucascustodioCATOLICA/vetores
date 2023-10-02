#include <stdio.h>

int main() {
    int num[10];

    for(int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    int maior = 0;
    int pos = 0;

    for(int i = 0; i < 10; i++) {
        printf("ARRAY %d \n", num[i]);
        if(num[i] > maior) {
            maior = num[i];
            pos = i;
        }
    }

    printf("MAIOR %d \n", maior);
    printf("POSICAO %d", pos);

    return 0;
}