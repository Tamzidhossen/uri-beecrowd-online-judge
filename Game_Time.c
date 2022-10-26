#include <stdio.h>
 
int main() {
    int a,b,hour;
                scanf("%d %d",&a,&b);
                hour = (24-a)+b;
                if(a>=b){
                printf("O JOGO DUROU %d HORA(S)\n",hour);
                }else if(a<=b){
                    printf("O JOGO DUROU %d HORA(S)\n",b-a);
                }
    return 0;
}