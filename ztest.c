#include <stdio.h>

int main()
{
    char string[] = "World";

    char a[30];

    printf("Write your name: ");
    gets(a);
    printf("Your name is: %s\n", a);

    return 0;
}