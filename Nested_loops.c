/* for loops in c are good for creating more complex nested loops 

*/

 int main() 
 {
    
    char letter; 
    int number; 

    for(letter='A';letter <= 'H';letter++)
    {
        for(number = 1; number <= 10; number++ )
        {
            printf("%c%d  ",letter,number);
        }
        printf("\n");
    }
    
    
    
    
    
    
    
    return(0);

 }