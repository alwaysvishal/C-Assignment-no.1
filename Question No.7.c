// Vishal Gupta
// Roll no.2303510100108


#include <stdio.h>

int main()
{
    double km_per_hour, miles_per_hour;

    printf"Enter value in kilometres per hour: ");
    scanf("%lf", &km_per_hour);

    miles_per_hour = km_per_hour * 0.621371;

    printf("%.6lf miles per hour\n", miles_per_hour);
    return 0;
}
