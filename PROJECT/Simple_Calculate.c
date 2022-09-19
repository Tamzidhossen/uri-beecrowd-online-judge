#include <stdio.h>
 
int main() {
 
     int prodact1,unit1,product2,unit2;
        float prize1,prize2,total_count;
        scanf("%d %d %f",&prodact1,&unit1,&prize1);
        scanf("%d %d %f",&product2,&unit2,&prize2);
        total_count = (unit1 * prize1) + (unit2 * prize2);
        printf("VALOR A PAGAR: R$ %.2f\n",total_count);
    return 0;
}