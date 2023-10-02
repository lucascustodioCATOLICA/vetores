#include<stdio.h>

main(){
    float num[10], negativo = 0, positivo = 0;

    for (int i = 0; i < 10; i++){
        printf("\n-> NUMERO: ");
        scanf("%f", &num[i]);

        if (num[i] < 0){
            negativo++;
        }else {
            positivo += num[i];
        }
    }
    printf("\n\n--> NUM NEGATIVOS: %.0f", negativo); 
    printf("\n--> SOMA DOS POSITIVOS: %.2f", positivo);
}