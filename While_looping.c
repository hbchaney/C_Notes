/*  Should be simple enough to set up 

to stop an endless loop press control + c 

if 1 is inputed into the while loop it will be considered true 
*/


int main()
{
    int number; 

    number = 1;

    while(number <= 10)
    {
        printf("this is the number: %d\n",number);
        
        number++; // this is how to increment variables in c by one 
    }

    //do while looping 

    char letter; 

    letter = 'A';

    
    //the do while loop is similar to the while but it will always exicute at least once 
    do 
    {
        putchar(letter);
        letter++; // goes to the next letter stored in memory ... crazy stuff 

        //break; could be used to exit a loop especially with a nested if statement 
    }
    while(letter != 'Z'); //the while in this case acts almost like a switch 
    

    putchar("\n");
    return(0);
}