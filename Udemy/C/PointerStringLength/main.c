#include <stdio.h>
#include <stdlib.h>

int str_len(const char *ptr);

int str_len(const char *ptr)
{
    int count = 1;

    while (*ptr != 0)
    {
        ptr ++;
        count ++;
    }

    return count;
}

int main()
{
    const char my_string[] = "The quick brown fox jumped over the lazy dog.";
    int length;

    length = str_len(my_string);

    printf("Length of string is %d", length);

    return 0;
}
