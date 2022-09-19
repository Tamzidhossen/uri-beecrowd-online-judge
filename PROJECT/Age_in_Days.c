#include <stdio.h>
 
int main() {
 
    int input_days,day,month,years,remainder_day,remainder;
        scanf("%d",&input_days);
        years = input_days / 365;
        remainder_day = input_days % 365;
        month = remainder_day / 30;
        remainder = remainder_day % 30;
        day = remainder;
        printf("%d ano(s)\n",years);
        printf("%d mes(es)\n",month);
        printf("%d dia(s)\n",day);
    return 0;
}