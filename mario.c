#include <stdio.h>
#include <cs50.h>
int main()
{
    int h;
    do 
    {
        printf("Height: ");
        h = GetInt();
    }
    while (h < 0 || h > 23);
    for (int i = 0; i < h; i++)
    {
        //prints (h-1-i) spaces for each loop in i
        for (int j=h-1-i; j > 0; j--){
            printf(" ");
        }
        //prints (i+2) '#' for each loop in i
        for (int k=-2; k<i; k++){
            printf("#");
        }
        //newline
        printf("\n");
    }
    
}
