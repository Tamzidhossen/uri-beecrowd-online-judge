#include <stdio.h>
int main()
{
    int x,y,z,j,k;
    int sum=0;
    scanf("%d",&z);

    for(int i=1; i<=z; i++){
        scanf("%d %d",&x,&y);

        if(x<y){
            for(j=x+1,sum=0; j<y; j++){
                if(j%2==1){
                    sum+=j;
                }
            }
            printf("%d\n",sum);
        }

        else if(x>y){
            for(k=y+1,sum=0; k<x; k++){
                if(k%2!=0){
                    sum+=k;
                }
            }
            printf("%d\n",sum);
        }

        else{
            int sum=0;
            printf("%d\n",sum);
        }
    }
    return 0;
}
