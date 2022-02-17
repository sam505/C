#include <stdio.h>
#include <stdlib.h>

int main()
{
    int option;
    printf("Enter a value\n");
    scanf("%d", &option);

    switch (option)
    {
        case 10 ... 20:
            printf("You entered 10 to 20\n");
            break;
        case 21 ... 30:
            printf("You entered 21 to 30\n");
            break;
        default:
            printf("You entered more than 30\n");
    }
    return 0;
}
