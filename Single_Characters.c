//in this we will include another header 

#include <stdio.h> 
#include <ctype.h> 

int main () 
{
    
    int ch = 'a'; //notice how the variable is specified as an int this is case a is also called int 97 if called as a char 

    printf("original %c\n",ch);
    printf("lower case %c\n",tolower(ch)); //these functions can use int or char types 
    printf("upper case %c \n",toupper(ch)); //these dont effect the value of ch 
    printf("the value of n is %d\n",'\n');

    //creating a small do while loop 
    
    int c;

    do 
    {
        c = getchar();
        c = toupper(c); 
        putchar(c);
    }
    while (c != '\n');


    int alpha; 

    do 
    {
        alpha = getchar();
        if(isalpha(alpha) || alpha == ' ') //returns true or false if in the alpha bet 
        {
            putchar(alpha); // there is a isdigit function as well
        }
    }
    while(alpha != '\n');
    

   return(0);
}