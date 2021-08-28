/* 
what is a variabel actually? 
- variables of a type and a name as seen before 

What if we run the code by just initializing a variable but not assigning any values 
*/ 

#include <stdio.h>

int main()
{
    int a; // when this happens memory is allocated for a variable a 
    //whatever value is already there for the memory is absorbed by a 
    char b; 
    float c; 
    long d; 
    double e; 
    short f;

    //printf("%d\n",a);
    //printf("%c\n",a);
    
    //using size of operator 
    printf("what is the size of a in bytes of storage : %lu\n", sizeof(a)); //lu = long unsigned interger because size of returns that 
    printf("what is the size of b in bytes of storage : %lu\n", sizeof(b));
    printf("what is the size of c in bytes of storage : %lu\n", sizeof(c));
    printf("what is the size of d in bytes of storage : %lu\n", sizeof(d));
    printf("what is the size of e in bytes of storage : %lu\n", sizeof(e));
    printf("what is the size of f in bytes of storage : %lu\n", sizeof(f));
    


    struct mystuff { 
        int a; 
        char b[34];
        float c;
    };

    printf("the size of mystuff in bytes is : %lu \n", sizeof(struct mystuff)); //need to specify struct for this?

    //you can also get info on the memory location where data is stored 

    int aa;
    char bb; 
    float cc;

    puts("here are the memory locations : ");
    printf("aa :  %p\n",&aa); //%p means pointer &aa means grab the locations 
    printf("bb :  %p\n",&bb);
    printf("cc :  %p\n",&cc); //outputs data in hexadecimal 

    return(0);
}
