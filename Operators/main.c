#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 1, num2 = 0;
    // complexity of a program
    // short circuit evaluation

    // OR
    if (num1++ || num2++)
    {
        printf("ORif:num1 is %d num2 is %d\n", num1, num2);
    }
    else
    {
        printf("ORelse:num1 is %d num2 is %d\n", num1, num2);
    }

    // AND
    if (num1++ && num2++)
    {
        printf("ANDif:num1 is %d num2 is %d\n", num1, num2);
    }
    else
    {
        printf("ANDelse:num1 is %d num2 is %d\n", num1, num2);
    }

    //NOT
    if (!num1)
    {
        printf("NOTif:num1 is %d num2 is %d\n", num1, num2);
    }
    else
    {
        printf("NOTelse:num1 is %d num2 is %d\n", num1, num2);
    }

    // Associativity L to R
    printf("%d", 1 && 0 || 1 || 1);

    return 0;
}
