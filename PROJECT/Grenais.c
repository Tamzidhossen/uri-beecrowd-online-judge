#include <stdio.h>
int main()
{
    int x,y,i;
    int inter=0,gremio=0,empates=0,j=0;
    while(1)
    {
        scanf("%d %d",&x,&y);
        if(x>y)
        {
            inter+=1;
        }
        if(x<y)
        {
            gremio+=1;
        }
        if(x==y)
        {
            empates+=1;
        }
        j++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&i);
        if(i==1)
        {
            continue;
        }
        if(i==2)
        {
            break;
        }
    }
    printf("%d grenais\n",j);
    printf("Inter:%d\n",inter);
    printf("Gremio:%d\n",gremio);
    printf("Empates:%d\n",empates);
    if(inter>gremio)
    {
        printf("Inter venceu mais\n");
    }
    else if(inter<gremio)
    {
        printf("Gremio venceu mais\n");
    }
    else
    {
        printf("Empates venceu mais\n");
    }
}