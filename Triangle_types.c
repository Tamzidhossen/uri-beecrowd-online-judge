#include <stdio.h>
 
int main() {
 
    double a,b,c;
                scanf("%lf %lf %lf",&a,&b,&c);
                if((a>=b+c) || (b>=a+c) || (c>=a+b) && a>0 && b>0 && c>0){
                    printf("NAO FORMA TRIANGULO\n");
                } else if((a*a==b*b + c*c) || (b*b == a*a + c*c)|| (c*c == a*a + b*b) && a>0 && b>0 && c>0){
                    printf("TRIANGULO RETANGULO\n");
                }else if(((a*a>b*b + c*c) || (b*b>a*a + c*c)|| (c*c>a*a + b*b)) && 0<a && 0<b &&0<c){
                    printf("TRIANGULO OBTUSANGULO\n");
                }else if(a*a<b*b+c*c && 0<a && 0<b && 0<c){
                    printf("TRIANGULO ACUTANGULO\n");
                }if(a==b && a==c && 0<a && 0<b && 0<c){
                    printf("TRIANGULO EQUILATERO\n");
                }if((a==b && a!=c) || (b==c && b!=a) || (a==c && a!=b) && 0<a && 0<b && 0<c){
                    printf("TRIANGULO ISOSCELES\n");
                }
    return 0;
}