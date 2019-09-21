#include <stdio.h>
#include <stdlib.h>

float get_hours_worked()
{
    float hours_worked;
    printf("\nPlease enter the number of hours you worked this week: ");
    scanf("%f", &hours_worked);
    return hours_worked;
}

float calculate_gross_pay(float hours, float basic_pay_rate, float overtime_rate)
{
    if (hours <= 40)
    {
        return hours * basic_pay_rate;
    }
    else
    {
        return (40.0 * basic_pay_rate) + ((hours - 40.0) * (overtime_rate * basic_pay_rate));
    }
}

float calculate_tax(float gross_pay, float tax_rate_low, float tax_rate_medium, float tax_rate_high)
{
    if (gross_pay <= 300)
    {
        return gross_pay * tax_rate_low;
    }
    else if ((gross_pay > 300 ) && (gross_pay <= 450))
    {
        return (300 * tax_rate_low) + ((gross_pay - 300) * tax_rate_medium);
    }
    else
    {
        return (300 * tax_rate_low) + (150 * tax_rate_medium) + ((gross_pay - 450) * tax_rate_high);
    }
}


int main()
{
    float basic_pay_rate = 12.00;
    float overtime_rate = 1.5;
    float tax_rate_low = 0.15;
    float tax_rate_medium = 0.2;
    float tax_rate_high = 0.25;
    float hours = get_hours_worked();
    float gross_pay = calculate_gross_pay(hours, basic_pay_rate, overtime_rate);
    float tax_paid = calculate_tax(gross_pay, tax_rate_low, tax_rate_medium, tax_rate_high);
    float net_pay = gross_pay - tax_paid;

    printf("\nYou worked %.0f hours this week", hours);
    printf("\nYour pay before tax for the week is €%.2f", gross_pay);
    printf("\nYour tax for this week is €%.2f", tax_paid);
    printf("\nYour net pay for this week is €%.2f", net_pay);
    printf("\n");

    return 0;
}
