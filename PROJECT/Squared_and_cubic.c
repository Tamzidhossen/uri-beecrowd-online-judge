#include <stdio.h>
int main()
{
    int x,a=1,b=1,c=1;
    scanf("%d",&x);
    for(int i=1; i<=x; i++)
    {
        printf("%d %d %d\n",a,b,c);
        a++;
        b=a*a;
        c=a*a*a;
    }
}