/*creating pointer funcitons is similar to creating any other function in c 

- the output type and input type must be defined but an input with a pointer value must be specified as such 
*/

//

#include <stdio.h>

void minus(int *v);

int main() 
{
    int value = 100; 


    printf("%d\n",value);
    minus(&value); //need & prefix
    printf("%d\n",value);

    return(0);


}

void minus( int *v)
{
    *v = *v -10;
}