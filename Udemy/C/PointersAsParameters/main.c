#include <stdio.h>
#include <stdlib.h>

void squareSelf(int *ptr)
{
    *ptr = *ptr * *ptr;
}

int main()
{
    int a = 4;
    squareSelf(&a);

    printf("\nThe result is: %d\n", a);

    return 0;
}
