/* 

very useful and powerful
a variable that holds a memory location (an adress)

when declaring a pointer its name is prefixed with *
must be initialized before use (usually to the address of another variable)

pointer data type and variable must match 
when used without an * it repressents an address 
when used without it repressents the value at the address


*/

int main() 
{
    int poker; 
    int *p; //notice how it is also an int 

    p = &poker; //the pointers stored adress is the address of poker 

    //test printing both addresses 

    printf("poker address : %p \n",&poker);
    printf("p address : %p\n", p); //they are the same ram location 

    // now assigning poker a value and testing it 
    poker = 6; 
    printf("the value of %p is %d \n",p,*p); //the p returns the address to the %p and the *p returns the value at that location


    //small pointer example 
    int a,b;
    int *pt; //dont forget the * when defining a pointer variable 

    a = 12;
    pt = &a;
    b = *pt;

    printf("a : %d and b : %d\n", a,b);

    

    return(0); //dont forget this ejects from the main function 
}