#include <stdio.h>
#include <stdlib.h>

float RectangleArea(float width, float height)
{
    return width * height;
}

float RectanglePerim( float width, float height)
{
    return 2.0 * (width + height);
}

int main()
{
    float width;
    float height;

    printf("\nPlease enter the width of the rectangle: ");
    scanf("%f", &width);
    printf("\nPlease enter the height of the rectangle: ");
    scanf("%f", &height);

    float area = RectangleArea(width, height);
    float perimiter = RectanglePerim(width, height);

    printf("\nThe width of the rectangle is %.2f", width);
    printf("\nThe height of the rectangle is %.2f", height);
    printf("\nThe area of the rectangle is  %.2f", area);
    printf("\nThe perimiter of the rectangle is %.2f", perimiter);

    return 0;
}
