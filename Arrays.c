/* arrays are very useful for 
parsing thorugh large data sets with similar processes 

array- collections of same type variables 

similar to declaring strings 
arrays are defined in curly brackets and seperated by commas 
first element is zero 
to call it, it is the same as python array[0]

number of elements in an array cannot be changed after the array is declared 
*/

#include <stdio.h>

int main() 
{
    int salaries_list[] = {1,2,3,4}; //dont forget the brackets
    int x; 
    int total = 0; 


    for (x=0; x<4; x++)
    {
        total = salaries_list[x] + total;
        printf("%d\n",total);

    }
}