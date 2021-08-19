/* the C language allows for complex decisions to be made using the 
switch command as shown in an example below
*/ 

#include <stdio.h> 

int main() 
{
    char aLetter;

    //prompts user for a letter than assigns the letters value to aLetter
    printf("please enter a letter (A,B,C) it is case sensative\n");
    scanf("%c",&aLetter);

    //now using the switch keyword 
    switch(aLetter)
    {

        case 'A' : //basically the same as an if, elseif etc statement  
            puts("you chose A");
            break; //requries the key word break to tell the code that it should exit 
        case 'B' : 
            puts("you chose B");
            break; 
        case 'C' : 
            puts("you chose C");
            break; 
        default : 
            puts("please spell it correctly");
            break; 
 
    }

    //testing it with strings -- cannot do it for strings 

  








}
