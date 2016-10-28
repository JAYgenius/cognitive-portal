#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main()
{
    int qua, nik, dim, pen;
    qua = 25; nik = 10;
    dim = 5; pen =1;
    int coin = 0;
    float cent;
    
    printf("O hai! How much change is owed?\n");
    cent = GetFloat();
    cent = cent * 100;
    roundf(cent);
    
    while(cent % qua != 25){
        cent -= 25;
        coin++;
    }
    while(cent % nik != 10){
        cent -= 10;
        coin++;
    }
    while(cent % dim != 5){
        cent -= 5;
        coin++;
    }
    while(cent % pen != 1){
        cent -= 1;
        coin++;
    }
    
    printf("%i", coin);
}