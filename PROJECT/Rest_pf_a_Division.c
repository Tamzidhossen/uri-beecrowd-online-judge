#include <stdio.h>
int main()
{
    int x,y,sum=0;
    scanf("%d %d",&x,&y);
    if(x>y)
    {
       for(int i=y+1; i<x; i++)
       {
           if(i%5==2 || i%5==3)
           {
              printf("%d\n",i);
           }
       } 
    }
    else if(x<y)
    {
        for(int j=x+1; j<y; j++)
        {
            if(j%5==2 || j%5==3)
            {
                printf("%d\n",j);
            }
        }
    }
}