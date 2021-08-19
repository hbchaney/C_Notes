// c lacks a string type and instead uses an array of strigns 

/* 
all strings end with a null character escape seqeunce witch tells the code when to end \0
literal strings are enclosed within double loops 

to declare a string = char string[] (empty if immediately assigned)
    the brackets contain the length of the string as well as the an extra for the null 
*/

#include <stdio.h>

int main() 
{
    char name[] = "Harrison"; // the size will be assigned at run time 

    printf("hello there %s\n",name); // it will print the name like any other variable


    // can also grab the name from scanf

    
    /*
    printf("type your name");
    scanf("%s",name);
    printf("the new name is %s\n",name);
    */

    //can also do it like this 

    char newInput[64]; 

    printf("instructions\n");
    fgets(newInput,64,stdin); //makes sure that the input will not exceed the size of the defined string 
    //stdin is the file that the values are being inputed in to read 

    puts(newInput);


}