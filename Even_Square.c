#include <stdio.h>
 
int main() {
 
    int value;
    int sum,num;
    scanf("%d",&value);
    if(value>5 && value<2000){
        for(int i=1; i<=value; i++){
            if(i%2==0){
                sum = i*i;
                num = 2;
                printf("%d^%d = %d\n",i,num,sum);
            }
        }
    }
    return 0;
}