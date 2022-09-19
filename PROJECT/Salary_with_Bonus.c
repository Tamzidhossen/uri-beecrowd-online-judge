#include <stdio.h>
 
int main() {
 
    char name[10];
        double total_salary,selars_salary,salary;
        scanf("%s",&name);

        scanf("%lf %lf",&total_salary,&selars_salary);
        salary = total_salary + (0.15*selars_salary);

        printf ("TOTAL = R$ %.2lf\n",salary);
    return 0;
}