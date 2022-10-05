#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 int d1,h1,m1,s1,d2,h2,m2,s2,first_s,last_s,total,total_day,total_hour,total_minute,total_second;
    int x,y;
    scanf("Dia %d\n",&d1);
    scanf("%d : %d : %d\n",&h1,&m1,&s1);
    scanf("Dia %d\n",&d2);
    scanf("%d : %d : %d",&h2,&m2,&s2);
    first_s = s1+m1*60+h1*3600+d1*24*3600;
    last_s  = s2+m2*60+h2*3600+d2*24*3600;
    total = last_s - first_s;

    total_day = total /(24*3600);
    x = total % (24*3600);
    total_hour = x /3600;
    y = x % 3600;
    total_minute = y /60;
    float z = y % 60;
    printf("%d dia(s)\n",total_day);
    printf("%d hora(s)\n",total_hour);
    printf("%d minuto(s)\n",total_minute);
    printf("%.0f segundo(s)\n",z);
    return 0;
}