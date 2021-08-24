/*
! Not 
&& and 
|| or 

all non zero values are considered true 
zero is considered false 
*/

int iscaps(int);

int main() 
{
    int c; 
    do 
    {
        c = getchar();
        if(iscaps(c))
        {
            c = putchar(c);
        }
    }
    while(c != '\n');
}

int iscaps(int ch)
{
    if( ch < 'A' || ch > 'Z')
    {
        return(0);
    }
    else
    {
        return(1);
    }
}