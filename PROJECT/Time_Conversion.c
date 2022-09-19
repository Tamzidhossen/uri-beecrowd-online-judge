#include <stdio.h>
 
int main() {
 
    int ts,h,m,s,h1,m1;
    scanf("%d",&ts);
    h = ts/3600;
    h1 = ts%3600;
    m = h1/60;
    m1 = h1%60;
    s = m1;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}