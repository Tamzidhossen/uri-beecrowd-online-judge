#include <stdio.h>
 
int main() {

    float a,b,c,sum;
        scanf("%f %f %f",&a,&b,&c);
        sum = ((a+b) / 2)*c;
        if(a+b>c){
            if(a+c>b){
                if(b+c>a){
                    printf("Perimetro = %.1f\n",a+b+c);
                } else{
                    printf("Area = %.1f\n",sum);
                }
            }
            else{
                    printf("Area = %.1f\n",sum);
                }
        }else{
                    printf("Area = %.1f\n",sum);
                }
    return 0;
}