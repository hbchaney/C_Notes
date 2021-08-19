// if you wanted to do more complex math functions in c 
/* you would have to take advantage of the the math.h header
    -providees the ability to make things to the power of something

    other notes 
        - double can increase the precision but is not usually necessary 
*/ 
#include <stdio.h>
#include <math.h>

int main() 
{
    float x; 
    x = 10.0;

    float y = sqrt(x);
    printf("%f\n", y);

    // now to raise something to a power 

    float z = pow(x,2.0);
    printf("%f\n",z);



}