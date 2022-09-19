#include <stdio.h>
int main()
{
    double x,y,sum=0;
    while(1)
    {
        if(y==2)
        {
            break;
        }
        scanf("%lf",&x);
        if(x>=0 && x<=10)
        {
            sum+=x;
            y++;
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    printf("media = %.2lf\n",(sum/2.0));
    return 0;
}
