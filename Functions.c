/* 
all functions have a type name and arguments 

void - means there is nothing the eq. of none in python 

here is an example 

void alpha(void)
{
    there are no outputs/inputs maybe its just printing something 

}

notes: 
functions stop running after going through all the lines of code that it has 
for functions to return a value they must out put a return statement 

return also works to break out of the function if no output is stated 

the main function will always run first while the created function will fun when it is called 


variables within functions cannot be referenced outside of functions 
*/

#include <stdio.h>

float babiesfirst(int); //will inform the complier of the function and its o/i types before it is used
//not necessary if the function is writen above the main function

int main() 
{
    int value = 9; 
    float new_value;

    new_value = babiesfirst(value);

    printf("new value is : %f ",new_value);



}

float babiesfirst(int value)
{
    if( value > 10 )
    {
        printf("very big number\n");
        return(value*10);
    }
    else
    {
        printf("very small number\n");
        return(value*.5);
    }
}