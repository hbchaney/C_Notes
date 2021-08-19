/* 
for loops are the most complex of all the different types of loops 

it includes the initialization and the exit statements all into one

In c this loop is quite complex actually you need to first initialize the number 
than tell when the loop will stop 
and also tell how to increase the iteration 

^all of the above is included in the for statement alone 
*/

#include <stdio.h>

int main() 
{
    int number; 

    for(number=0;number<10;number++) //notice that a semicolon seperates each of the for loop values 
    {
        printf("%d\n",number);

        //emergency loop break 
        if (number > 20)
        {
            break;
        }

        

    

    }
    
    //now creating two loops for example problem 

    for(number=1;number<21;number++)
    {
        printf("%d  ",number);
    }

    printf("\n");
    number = -10; 

    while(number < 11)
    {
        printf("%d  ",number);
        number = number + 2;
    }
    
    //all loops ran successfully 
    
    return(0);

}