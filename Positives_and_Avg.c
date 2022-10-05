#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 int x=0;
    float total=0,num;
    for(int i=1; i<=6; i++){
        scanf("%f",&num);
        if(num>0){
            x+=1;
            total += num;
        }
    }
    printf("%d valores positivos\n",x);
    printf("%.1f\n",total / x);
    return 0;
}