// exploring getchar and putchar they need stdio also scanf
#include <stdio.h> 


main() 
{ 
    int c; // it is defined as an int not a string 

    printf("Type a letter: \n");
    c = getchar(); 
    putchar(c);
    printf("you typed in %c \n", c);

    //now scanf

    int scan; 

    printf("type in an int\n");
    scanf("%d", &scan); // & not needed for strings but dont forget for every other value  
    scan = scan*scan;

    printf("new value is %d\n", scan);




}