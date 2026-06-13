#include <stdio.h>

int main() {
    float years, days;

    printf("Enter number of years: ");
    scanf("%f", &years);

    days = years * 365;
    printf("%.2f years = %.2f days\n", years, days);

    printf("Enter number of days: ");
    scanf("%f", &days);

    years = days / 365;
    printf("%.2f days = %.2f years\n", days, years);
}