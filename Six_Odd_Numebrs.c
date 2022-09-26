#include <stdio.h>
 
int main() {
 
    int x;
     scanf("%d",&x);
     for(int i=1; i<=6;)
     {
        if(x%2==1)
        {
            printf("%d\n",x);
            i++;
        }
        x++;
     }
    return 0;
}