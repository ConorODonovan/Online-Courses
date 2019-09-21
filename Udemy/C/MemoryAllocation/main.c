#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    char *text = NULL;

    printf("\nEnter limit of the text: \n");
    scanf("%d", &size);

    text = (char *) malloc(size * sizeof(char));

    if (text != NULL)
    {
        printf("\nEnter some text: \n");
        scanf(" ");
        gets(text);

        printf("\nInputted text is: %s\n", text);
    }

    free(text);
    text = NULL;

    return 0;
}
