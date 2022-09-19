#include <stdio.h>
int main()
{
    int x,y,a=1,b=2,c=3;
    scanf("%d",&y);
    for(x=1; x<=y; x++)
    {
        printf("%d %d %d PUM\n",a,b,c);
        a += 4;
        b += 4;
        c += 4;
    }
    return 0;
}
