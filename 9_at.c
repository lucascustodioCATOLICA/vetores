#include <stdio.h>

int main() {
    int num[6];

    for(int i = 0; i < 6; i++) {
        int repete = 0;
        do {
            printf("POS %d: ", i);
            scanf("%d", &num[i]);

            if(num[i] % 2 == 1) {
                repete = 1;
            } else {
                repete = 0;
            }
        } while (repete == 1);
    }

    printf("-------------------- \n");

    for(int i = 5; i >= 0; i--) {
        printf("ARRAY %d \n", num[i]);
    }

    return 0;
}