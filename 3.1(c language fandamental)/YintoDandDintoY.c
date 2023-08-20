#include <stdio.h>

int main() {
    double years;
    int days;

   
    printf("Enter the number of years: ");
    scanf("%lf", &years);

    days = (int) (years * 365);   
    printf("%.2lf years is  %d days.\n", years, days);

    
    printf("Enter the number of days: ");
    scanf("%d", &days);

    years = (double) days / 365;
    printf("%d days is  %.2lf years.\n", days, years);

    return 0;
}

