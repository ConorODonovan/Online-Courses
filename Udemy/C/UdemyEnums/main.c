#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum companyName{GOOGLE, MICROSOFT, XEROX, EBAY, YAHOO};
    enum companyName company1;
    enum companyName company2;
    enum companyName company3;

    company1 = YAHOO;
    company2 = GOOGLE;
    company3 = MICROSOFT;

    printf("The companies are %d, %d, %d", company1, company2, company3);

    return 0;
}
