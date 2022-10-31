#include <stdio.h>
 
int main() {

    float a,b,c,d,sum,f,avg;
        scanf("%f %f %f %f",&a,&b,&c,&d);

        sum = ((a*2) + (b*3) + (c*4) + d) / 10;
        printf("Media: %.1f\n",sum);
        if(sum >= 7.0){
            printf("Aluno aprovado.\n");
        } else if(sum < 5.0){
            printf("Aluno reprovado.\n");
        }else if(sum >= 5.0 && sum <= 6.9){
            printf("Aluno em exame.\n");
        scanf("%f",&f);
        printf("Nota do exame: %.1f\n",f);
        avg = (sum + f) / 2;
        if(avg >= 5.0){
            printf("Aluno aprovado.\n");
        }else if(avg <= 4.9){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",avg);
        }
    return 0;
}