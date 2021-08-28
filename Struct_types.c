/* 
the struct data type is the most complex type in c 
-it can contain other types within including other structs 

*/
#include <stdio.h>

int main() 
{
    struct bank {
        int account;
        float interest;
        //char bank_name[64]; cannot later assign strings in c by using the equals sign 
    }; 

    //to add a variable of the bank type 
    struct bank checking; 
    struct bank savings; 


    // can also be added like this 
    /* 
    struct bank {
        int account;
        float interest;
        char bank_name[64];
    } checking;  
    */ 

    checking.account = 1336;
    checking.interest = 1.01; //%
    //checking.bank_name = "American Bank of America";

    printf("Your account is %d\n",checking.account);
    printf("Your interest rate is %f\n", checking.interest);
    //printf("the name of the Bank : \n%s\n",checking.bank_name);

    savings.account = 5000;
    savings.interest = 1.03;

    printf("Your account is %d\n",savings.account);
    printf("Your interest rate is %f\n", savings.interest);

    //structs with strings 
    struct person{
        char name[32];
        int age;
    };

    struct person Harrison = {
        "Harrison Chaney",
        22
    };

    printf("the person's name is %s\nHis age is %d\n", Harrison.name,Harrison.age);


    //nested structures 

    struct date{
        int year; 
        int month; 
        int day; 
    };
    struct personable{
        char name[32];
        struct date birthday;
    };

    //now assigning the variables 

    struct personable Marianne = {
        "Marianne",
        {1998, 5, 16}
    };

    printf("this is %s bday : %d/%d/%d",
    Marianne.name,
    Marianne.birthday.month,
    Marianne.birthday.day,
    Marianne.birthday.year);

    return(0);
}