#include <stdio.h>
int main()
{
    int z;
    double x,y,sum;
    scanf("%d",&z);
    for(int i=1; i<=z; i++)
    {
        scanf("%lf %lf",&x,&y);
        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            sum = x/y;
            printf("%.1lf\n",sum);
        }
    }
}