#include <stdio.h>
 
int main() {
    float x;
    scanf("%f",&x);
    if(x>=0 && x<=2000){
        printf("Isento\n");
    }else if(x>=2000.01 && x<=3000){
        float d = (x-2000)*0.08;
        printf("R$ %.2f\n",d);
    }else if(x>=3000.01 && x<=4500){
        float a = (x-3000)*0.18 + 80;
        printf("R$ %.2f\n",a);
    }else if(x>=4500.01){
        float b = (x-4500)*0.28 + 350;
        printf("R$ %.2f\n",b);
    }
    return 0;
}