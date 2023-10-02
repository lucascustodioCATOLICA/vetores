#include <stdio.h>

int main() {
    int num[6];

    for(int i = 0; i < 6; i++) {
        scanf("%d", &num[i]);
    }

    printf("-------------------- \n");

    for(int i = 5; i >= 0; i--) {
        printf("ARRAY %d \n", num[i]);
    }

    return 0;
}