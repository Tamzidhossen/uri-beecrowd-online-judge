#include <stdio.h>
 
int main() {
 
    int x;
    scanf("%d",&x);
    if(1<=x && 1000>=x)
    {
        for(int i=1; i<=x; i++)
        {
        if(i%2==1){
            printf("%d\n",i);
        }
        }
    }
    return 0;
}