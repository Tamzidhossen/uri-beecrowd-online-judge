#include <stdio.h>
int main()
{
    int x,sum=0,sum1=0,sum2=0;
    
    while(1)
    {
        scanf("%d",&x);
        if(x==1)
        {
            sum++;
        }
        else if(x==2)
        {
            sum1++;
        }
        else if(x==3)
        {
            sum2++;
        }
        else if(x==4)
        {
            break;
        }
        else
        {
            continue;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",sum);
    printf("Gasolina: %d\n",sum1);
    printf("Diesel: %d\n",sum2);
}
