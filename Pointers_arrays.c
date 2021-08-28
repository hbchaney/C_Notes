/* 

this is where pointers are most useful

arrays dont really exist in c its actually just pointers 

*/
#include <stdio.h>

int main() 
{
    int array[] = {12, 34 , 56, 78};
    int x; 
    int *p;

    p = array; // no & in this array (it tells the location of the first element in the array )

    for(x = 0; x < sizeof array / sizeof *p; x++) //this is the size of the array (total bytyes/bytes per element)
    {
        printf("%d\n",*p);
        p++; // this is because it is stored sequentailly in memory 
    }


    
    return(0);

}