#include <stdio.h>
int main()
{    
    double x,y,sum=0;
    while(1)
    {
        scanf("%lf",&x);
        if(x < 0.0 || x > 10.0)
            printf("nota invalida\n");
        else
        {
            sum += x;
            y++;
            if(y==2)
            {
                printf("media = %.2lf\n",(sum/2.0));
                printf("novo calculo (1-sim 2-nao)\n");
                while(1)
                {
                    scanf("%lf",&x);
                    if((int)x==1)
                    {
                        sum = y = 0;
                        
                        break;
                    }
                    else if((int)x==2)
                        return 0;
                    else
                        printf("novo calculo (1-sim 2-nao)\n");
                }
            }
        }
    }
}