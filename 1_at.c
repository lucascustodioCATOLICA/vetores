#include <stdio.h>

int main() {
    int num[6] = {1, 0, 5, -2, -5, 7};

    int soma = num[0] + num[1] + num[5];

    printf("A SOMA EH: %d \n", soma);

    num[4] = 100;

    for(int i = 0; i < 6; i++) {
        printf("VALOR %d \n", num[i]);
    }
    
    return 0;
}