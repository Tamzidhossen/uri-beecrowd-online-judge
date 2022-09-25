#include <stdio.h>
 
int main() {
 
 int x,n;
 int sum=0,error=0;
 scanf("%d",&x);
 for(int i=1; i<=x; i++){
     scanf("%d",&n);
     if(n>=10 && n<=20){
        sum+=1;
     }else{
        error+=1;
     }
 }
 printf("%d in\n",sum);
 printf("%d out\n",error);
    return 0;
}