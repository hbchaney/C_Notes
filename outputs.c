#include <stdio.h> /* this is a header file and contains helpful definitions */

/* there are many different ways to get outputs in the c language */ 
/* the three most popular are 
    printf() 
    putchar()
    puts()
*/

int main() 
{
    puts("Hello World");
    puts("hi there?");
    
    printf("hey there\n"); // requires an escape sequence in order to print a new line 
    printf("printf is better than puts\n");

    // how to print a new line without the editor reading it like one line
    // all escape sequences start with back slashes 

    printf("hemlo,\n\"how you doin\"\n");

    //now displaying values in strings with PLACEHOLDERS

    printf("Here is a value: %d\n", 27); //this will replace d with the values I want (d means base 10 integer)
    printf("this is %c %s\n",'S',"Marianne"); //%s takes in a string value and %c takes in single character in single quotes

    

    
    return(0); 

}