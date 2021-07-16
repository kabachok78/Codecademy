#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    // TODO: Prompt for start size
    int start;
    int end;
    int y=0;
    do 
    {
        start= get_int("Start size: ");
    }
    while (start<9);
    // TODO: Prompt for end size
    do 
    {
       end= get_int("End size: ");
    }
    while (end<start);
    // TODO: Calculate number of years until we reach threshold
    
   while(start<end)
   {
        int born= start/3;
        int pass_away= start/4;
        start=start+born-pass_away;
        y++;
   }
        
   
    
        
    // TODO: Print number of years
    printf("Years: %i\n",y);  
       
    }
   

