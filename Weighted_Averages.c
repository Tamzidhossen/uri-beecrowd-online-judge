#include <stdio.h>
 
int main() {

    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        float a,b,c;
        float sum;
        scanf("%f %f %f",&a,&b,&c);
        sum = (a*2+b*3+c*5)/(2+3+5);
        printf("%.1f\n",sum);
    }
    return 0;
}