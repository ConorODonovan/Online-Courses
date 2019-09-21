#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Hard-coded values for monthly rainfall over 5 years
    float rainfall[5][12] =
    {
        {0.12,1.10,0.56,0.34,0.90,0.88,0.16,0.10,1.30,1.00,1.05,0.54},
        {0.22,1.40,0.58,0.14,0.94,0.80,0.36,0.10,1.30,1.00,1.05,0.54},
        {0.32,1.30,0.51,0.24,0.93,0.82,0.56,0.10,1.30,1.00,1.05,0.54},
        {0.42,1.00,0.52,0.44,0.92,0.84,0.76,0.10,1.30,1.00,1.05,0.54},
        {0.52,1.20,0.53,0.54,0.91,0.86,0.96,0.10,1.30,1.00,1.05,0.54}
    };

    // Total yearly rainfall
    int i;
    int j;
    float total_yearly_rainfall[5] = {0,0,0,0,0};

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 12; j++)
        {
            total_yearly_rainfall[i] += rainfall[i][j];
        }
    }

    // Average yearly rainfall
    int a;
    float average_rainfall = 0;

    for (a = 0; a < 5; a++)
    {
        average_rainfall += total_yearly_rainfall[a];
    }

    average_rainfall = average_rainfall/5;

    // Average monthly rainfall
    int k;
    int l;
    float average_monthly_rainfall[12] = {0,0,0,0,0,0,0,0,0,0,0,0};

    for (k = 0; k < 12; k++)
    {
        for (l = 0; l < 5; l++)
        {
            average_monthly_rainfall[k] += rainfall[l][k];
        }
        average_monthly_rainfall[k] = average_monthly_rainfall[k]/5;
    }

    // Formatting
    printf("\nTOTAL RAINFALL PER YEAR");
    printf("\n2014: %.2fmm", total_yearly_rainfall[0]);
    printf("\n2015: %.2fmm", total_yearly_rainfall[1]);
    printf("\n2016: %.2fmm", total_yearly_rainfall[2]);
    printf("\n2017: %.2fmm", total_yearly_rainfall[3]);
    printf("\n2018: %.2fmm", total_yearly_rainfall[4]);

    printf("\n");

    printf("\nThe average yearly rainfall over the past five years is %.2fmm", average_rainfall);

    printf("\n");

    printf("\nAVERAGE MONTHLY RAINFALL OVER THE PAST FIVE YEARS");
    printf("\nJanuary: %.2f", average_monthly_rainfall[0]);
    printf("\nFebrury: %.2f", average_monthly_rainfall[1]);
    printf("\nMarch: %.2f", average_monthly_rainfall[2]);
    printf("\nApril: %.2f", average_monthly_rainfall[3]);
    printf("\nMay: %.2f", average_monthly_rainfall[4]);
    printf("\nJune: %.2f", average_monthly_rainfall[5]);
    printf("\nJuly: %.2f", average_monthly_rainfall[6]);
    printf("\nAugust: %.2f", average_monthly_rainfall[7]);
    printf("\nSeptember: %.2f", average_monthly_rainfall[8]);
    printf("\nOctober: %.2f", average_monthly_rainfall[9]);
    printf("\nNovember: %.2f", average_monthly_rainfall[10]);
    printf("\nDecember: %.2f", average_monthly_rainfall[11]);

    printf("\n");

    return 0;
}
