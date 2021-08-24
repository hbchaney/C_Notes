/* 
strings are collections of char variables arranged in an array

the final character is \0 which tells the code to escape reading the string 

string.h will be used 
*/

#include <string.h> 
#include <stdio.h>

int main () 
{
    char string[] = "my house is on the street";
    int len; 


    len = strlen(string); //does not need the brackets anymore 
    printf("the following string is : ");
    puts(string);
    // printf("\n"); puts makes a new line remeber 
    printf("it is this long:  %d\n", len);

    char new_string[64];

    printf("what do ya need? : \n");
    fgets(new_string,64,stdin);
    len = strlen(new_string);
    printf("here is ithe new length: %d \n", len);


    char first_string[] = "hello there this is the first string ";
    char second_string[] = "hello there this is the second string\n";

    //to add the two strings together 

    char buffer_string[128]; //make sure the buffer is big enough 

    strcpy(buffer_string,first_string); // copies the first string to the buffer
    strcat(buffer_string,second_string); // adds the second string to the buffer

    printf("I can combine two strings so easily: %s\n", buffer_string);


    return(0);
}
