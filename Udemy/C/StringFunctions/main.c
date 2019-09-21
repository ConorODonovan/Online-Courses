#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char user_input[10];

    scanf("%s", user_input);

    int a = strlen(user_input);
    int i = a;

    for (i = a - 1; i >= 0; i--)
    {
        printf("%c",user_input[i]);
    }

    return 0;
}
