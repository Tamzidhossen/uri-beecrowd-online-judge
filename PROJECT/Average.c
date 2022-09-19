#include <stdio.h>
 
int main() {
 
    double A,B,Avg;
    scanf("%lf%lf",&A,&B);
    Avg = ((A*3.5) + (B*7.5)) / (3.5 + 7.5);
    printf("MEDIA = %.5lf\n",Avg);
    
    return 0;
}