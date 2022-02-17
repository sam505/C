#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    printf("Good evening\n");
    char ch;
    int i;
    float f;
    double d;

    printf("%d\n", sizeof(ch));
    printf("%d\n", sizeof(i));
    printf("%d\n", sizeof(f));
    printf("%d\n", sizeof(d));

    short int count1;
    int long count2;
    short count3;

    printf("Short int is %zu bytes\n", sizeof(short int));
    printf("Long int is %zu bytes\n", sizeof(int long));
    printf("Short is %zu bytes\n", sizeof(short));
    return 0;
}
