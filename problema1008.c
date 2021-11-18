#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main() {
 
    int number, hours;
    double work_hours, salary;
    scanf("%d%d", &number, &hours);
    scanf("%lf", &work_hours);
    salary = (hours*work_hours);
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", number, salary);
    
    return 0;
}
