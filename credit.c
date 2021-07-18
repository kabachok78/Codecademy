#include<stdio.h>
#include<cs50.h>

int main(void)
{
    long number= get_long("Number: ");
    int counter = 0;
    int doubled =0;
    int not_doubled=0;
    int sum_doubled=0;
    int sum =0;
    long number_x=number;
    long number_amx;
    long number_vsa;
    long number_mst;
    int cardcheck=0;



    while(number>0)
    {
       int digit = number % 10;
       number= (number- digit)/10;
       counter ++;

       if (counter %2==0)
       {
        doubled = digit*2;

           if(doubled/10 >=1)
           {
               doubled = doubled % 10 + ((doubled %100 - doubled %10)/10);
           }
            sum_doubled = sum_doubled+doubled;
       }
       else
       {
           not_doubled = not_doubled+digit;
       }


    }

    sum=sum_doubled+not_doubled;



    if(sum % 10 == 0 && (counter == 13 || counter == 15 || counter == 16 ))
    {
        if (counter == 13)
        {
             number_vsa = (number_x-(number_x %1000000000000))/1000000000000;
             if(number_vsa == 4)
             {
                printf("VISA\n");
                cardcheck ++;
             }
        }

        else if (counter == 15 )
        {
           number_amx = (number_x-(number_x %10000000000000))/10000000000000;
           if(number_amx == 37 || number_amx == 34)
           {
                 printf("AMEX\n");
                 cardcheck ++;
           }
        }

        else if (counter == 16)
        {
           number_vsa = (number_x-(number_x %1000000000000000))/1000000000000000;
           number_mst = (number_x-(number_x %100000000000000))/100000000000000;

           if(number_vsa == 4)
           {
                 printf("VISA\n");
                 cardcheck ++;
           }
           if(number_mst == 51 || number_mst == 52 || number_mst == 53 || number_mst == 54 || number_mst == 55 )
           {
                printf("MASTERCARD\n");
                cardcheck ++;
           }
           
        }

    }
    

    if (cardcheck<1)
    {
        printf("INVALID\n");
    }
  


}