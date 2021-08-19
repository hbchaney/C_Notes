/* 

when using if statements you need to know the logical operators

== is equal 
>=,<= 
>,<
!=



*/

#include <stdio.h>

int main() 
{
    int a; 
    printf("please enter and int :  ");
    scanf("%d", &a);
    printf("%d\n",a); // do not forget the & above 

    if( a < 10)
    {
        printf("its real small\n");
    }

    else if( a > 10)
    { 
        printf("its real big\n");
    }
    else
    {
        printf("just right");
    }

    return(0);
}