#include <stdio.h>

int main() {
    float num[15];

    for(int i = 0; i < 15; i++) {
        printf("ALUNO %d: ", i);
        scanf("%f", &num[i]);
    }

    printf("-------------------- \n");

    float media = 0;
    for(int i = 0; i < 15; i++) {
        media += num[i];
    }
    
    media = (float) media / 15;

    printf("MEDIA %.2f: ", media);

    return 0;
}