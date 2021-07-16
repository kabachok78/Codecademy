#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
    int quarter = 25;
    int dime  = 10;
    int nickle = 5;
    int penny = 1;
    int n = 0;
    float owed;

    do
    {
    owed = get_float("Change owed: ");
    }
    while (owed<=0);
    int cents = round(owed*100);

    while (cents>=quarter)
    {
       cents = cents-quarter;
       n++;
    }
    
    while (cents>=dime)
    {
        cents= cents-dime;
        n++;
    }
    
    while (cents>=nickle)
    {
        cents = cents-nickle;
        n++;
    }
    
    while (cents>=penny)
    {
        cents = cents-penny;
        n++;
    }
    printf("%i\n",n);


}