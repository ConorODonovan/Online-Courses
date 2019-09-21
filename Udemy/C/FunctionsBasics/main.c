#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Find the greatest common divisor (GCD) of two non-negative integers
int gcd(int a,int b)
{
    if(a == 0 || b == 0)
        return 0;    //as a and b are 0, the greatest divisior is also 0
    if(a==b)
        return b;    //when both numbers are same
    if(a>b)
        return gcd(a-b, b);
    else
        return gcd(a, b-a);
}

// Find the absolute value of a number
float absolute_value(float a)
{
    return abs(a);
}

// Compute the square root of a number
float square_root(float a)
{
    if (a < 0)
    {
        return -1.0;
    }
    else
    {
        return sqrt(a);
    }
}

int main()
{
    int i = 6666;
    int j = 9999;
    int k;
    k = gcd(i,j);

    float p = 54.65;
    float q;
    q = absolute_value(p);

    float r = 777;
    float s;
    s = square_root(r);

    printf("\nThe GCD between %d and %d is %d\n",i,j,k);
    printf("\nThe absolute value of %.2f is %.2f\n",p,q);
    printf("\nThe square root of %.2f is %.2f\n",r,s);

    return 0;
}
