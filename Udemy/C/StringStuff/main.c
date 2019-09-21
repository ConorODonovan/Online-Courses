#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int stringLength(const char string[]);
void concat(char result[], const char str1[], const char str2[]);
bool equalStrings(const char s1[], const char s2[]);

int main()
{
    const char word1[] = "Conor";
    const char word2[] = "OK";
    const char word3[] = "O'Donovan";
    char result[50];

    printf("\n%d %d %d\n", stringLength(word1), stringLength(word2), stringLength(word3));

    concat(result, word1, word2);

    printf("\n%s\n", result);

    printf("\n%d\n", equalStrings("Conor", "Conor"));
    printf("\n%d\n", equalStrings("Conor", "Moose"));

    return 0;
}

int stringLength(const char string[])
{
    int count = 0;

    while (string[count] != '\0')
        ++count;

    return count;
}

void concat(char result[], const char str1[], const char str2[])
{
    int i, j;

    for (i=0; str1[i] != '\0'; ++i)
    {
        result[i] = str1[i];
    }

    for (j = 0; str2[j] != '\0'; ++j)
    {
        result[i + j] = str2[j];
    }

    result[i+j] = '\0';
}

bool equalStrings(const char s1[], const char s2[])
{
    int i = 0;
    bool isEquals = false;

    while (s1[i] == s2[i] &&
           s1[i] != '\0' &&
           s2[i] != '\0')
        ++i;
    if (s1[i] == '\0' && s2[i] == '\0')
        isEquals = true;
    else
        isEquals = false;

    return isEquals;

}
