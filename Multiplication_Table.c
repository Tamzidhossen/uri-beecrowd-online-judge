#include <stdio.h>
 
int main() {
 
 int value,sum;
    scanf("%d",&value);
    for(int i=1; i<=10; i++){
        sum = value*i;
        printf("%d x %d = %d\n",i,value,sum);
    }
    return 0;
}
