#include <stdio.h>
 
int main() {
 
            int a,b,s;

        scanf("%d %d %d",&a,&b,&s);
        if(a>b) {
            if(a>s) {
                printf("%d eh o maior\n",a);
            } else  {
                printf("%d eh o maior\n",s);
            }
        } else{
            if(b>s) {
                printf("%d eh o maior\n",b);
            } else{

                printf("%d eh o maior\n",s);

            }
        }

    return 0;
}