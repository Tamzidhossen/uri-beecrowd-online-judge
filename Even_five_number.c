#include <stdio.h>
 
int main() {

    int sum;
    for(int i=1; i<=5; i++){
        int value;
        scanf("%d",&value);
        if(value % 2 == 0){
            sum+=1;
        }
    }
    printf("%d valores pares\n",sum);
    return 0;
}