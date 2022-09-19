#include <stdio.h>
 
int main() {
 
     int x,y;

        scanf("%d %d",&x,&y);
        double distance = (x * y)/12.0;
        printf("%.3lf\n",distance);
    
    return 0;
}