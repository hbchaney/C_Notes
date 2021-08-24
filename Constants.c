/* there are several different ways to express constants in 
the c language 

a value must be assigned to the const when created 

constant expression are written in all caps and need no semicolon 
*/

#include <stdio.h> 
#define THISCONSTANT 24

int main() 
{
    const int Harrison = 'H' + 'C';

    printf("my numbers are: %d\n",Harrison);
    printf("what is this cosntant %d\n", THISCONSTANT);
}