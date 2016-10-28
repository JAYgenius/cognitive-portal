#include <stdio.h>
#include <cs50.h>
int main()
{
    printf("minutes: ");
    int min = GetInt();
    int bot = min * 12;
    printf("bottles: ");
    printf("%i", bot);
    printf("\n");
}