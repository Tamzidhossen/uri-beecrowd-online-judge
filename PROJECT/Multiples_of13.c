#include <stdio.h>
int main()
{
    int x,y,sum=0;
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        for(int i=y; i<=x; i++)
        {
            if(i%13!=0)
            {
                sum += i;
            }
        }
    }
    else if(x<y)
    {
        for(int j=x; j<=y; j++)
        {
            if(j%13!=0)
            {
                sum += j;
            }
        }
    }
    printf("%d\n",sum);
}