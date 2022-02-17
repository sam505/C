#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iter;
    for (iter =0; iter < 10; iter++)
    {
        if (iter == 5)
        {
            break;
        }
        printf("Break: %d\n", iter);
    }

    for (iter =0; iter < 10; iter++)
    {
        if (iter % 2 == 0) //print odd numbers
        {
            continue;
        }
        printf("Continue: %d\n", iter);
    }
    return 0;
}
