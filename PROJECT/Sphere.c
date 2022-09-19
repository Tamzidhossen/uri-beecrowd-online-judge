#include <stdio.h>
 
int main() {
 
    double R,pi,total_numbar;
        pi = 3.14159;
        scanf("%lf",&R);
        total_numbar = (4.0/3.0)*pi*R*R*R;
        printf("VOLUME = %.3lf\n",total_numbar);
    return 0;
}