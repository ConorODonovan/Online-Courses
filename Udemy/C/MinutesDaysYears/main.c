#include <stdio.h>
#include <stdlib.h>

double get_years(double minutes, double minutes_in_year)
{
    return minutes/minutes_in_year;
}

double get_days(double minutes, double minutes_in_year)
{
    int minutes_int = (int)minutes;
    int minutes_in_year_int = (int)minutes_in_year;
    int remaining_minutes_int = minutes_int % minutes_in_year_int;

    double remaining_minutes = (double)remaining_minutes_int;

    return (remaining_minutes/24.0)/60.0;
}

int main()
{
    double minutes_in_year = (365.0 * 24.0 * 60.0);
    double minutes_input;

    printf("Please enter the number of minutes: ");
    scanf("%lf", &minutes_input);
    int minutes_input_int = (int)minutes_input;

    double years_double = get_years(minutes_input, minutes_in_year);
    int years = (int)years_double;

    double days = get_days(minutes_input, minutes_in_year);

    printf("There are %d years and %lf days in %d minutes", years, days, minutes_input_int);

    return 0;
}
