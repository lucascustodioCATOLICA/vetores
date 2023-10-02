#include <stdio.h>

int main() {
    int num[10];
    int quant = 0;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    printf("PARES \n");

    for(int i = 0; i < 10; i++) {
        if(num[i] %  2 == 0) {
            printf("%d \n", num[i]);
            quant++;
        }
    }

    printf("TOTAL %d \n", quant);

    return 0;
}