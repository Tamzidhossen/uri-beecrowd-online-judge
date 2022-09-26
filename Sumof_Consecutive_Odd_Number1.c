#include <stdio.h>
 
int main()
{
    int x,y;
    int start,end;
    int sum = 0;
    
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        start = x;
        end = y;
    }
    else
    {
        start = y;
        end = x;
    }
    for(int i = end + 1; i<start; i++)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
    }
    printf("%d\n",sum);
    return 0;
}