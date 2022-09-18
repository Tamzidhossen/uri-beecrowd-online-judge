#include <stdio.h>
int main()
{
    int x,y,z,number;
    int sum=0;
    int i;
    while (1)
    {
        scanf("%d %d",&x,&y);
        if (x<=0 || y<=0)
        {
            break;
        }
        else if(x>y)
        {
            sum=0;
            for(int i=y; i<=x; i++)
            {
                printf("%d ",i);
                sum+=i;
            }
            printf("Sum=%d\n",sum);
        }
        else
        {
            sum=0;
            for(int i=x; i<=y; i++)
            {
                printf("%d ",i);
                sum+=i;
            }
            printf("Sum=%d\n",sum);
        }
        
    }
    
}