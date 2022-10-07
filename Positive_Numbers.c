#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 int i,sum = 0;
    float x;
    for(i=1; i<=6; i++){
        scanf("%f",&x);
        if(x>0){
            sum = sum + 1;
        }

    }
    printf("%d valores positivos\n",sum);
    return 0;
}