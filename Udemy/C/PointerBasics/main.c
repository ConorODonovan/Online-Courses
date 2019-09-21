#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int a = 5;
    const int *pa = &a;

    printf("\nThe value of the address of a is: %p", &a);
    printf("\nThe address of pointer pa is: %p\n", &pa);
    printf("\nThe value of the pointer pa is: %p\n", pa);
    printf("\nThe value the pointer pa is pointing to is: %d\n", *pa);

    return 0;
}
