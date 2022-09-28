#include <stdio.h>
 
int main() {
 
    int sum=0,total=0,avg=0,neg_num=0;
    for (int i=1; i<=5; i++){
        int value;
        scanf("%d",&value);
        if(value%2==0){
            sum+=1;
        }else{
            total+=1;
        }
        if(value>0){
            avg+=1;
        }else if(value<0){
            neg_num+=1;
        }
    }
    printf("%d valor(es) par(es)\n",sum);
    printf("%d valor(es) impar(es)\n",total);
    printf("%d valor(es) positivo(s)\n",avg);
    printf("%d valor(es) negativo(s)\n",neg_num);
    return 0;
}