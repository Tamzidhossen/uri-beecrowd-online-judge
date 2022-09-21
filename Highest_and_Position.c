#include <stdio.h>

int main()
{
    int distance[100],x=0,y;
    for(int i=0; i<100; i++)
    {
        scanf("%d",&distance[i]);
        if(distance[i] > x)
        {
            x=distance[i];
            y=i+1;
        }
    }
    printf("%d\n",x);
    printf("%d\n",y);

    return 0;
}
