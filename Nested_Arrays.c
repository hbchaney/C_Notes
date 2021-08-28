/* 
you need to declare the lenght of the array if the array is not specifically declared 
*/

int main() 
{
    int two_array[3][3]; 
    int row, col; 
    int basec = 1;
    int basex = 1;

    //making a grid with 1 3 5 kinda thing than printing it 

    for(row = 0;row<3;row++)
    {
        basec = 1;
        for(col=0;col<3;col++)
        {
            two_array[row][col] = basec;
            basec = basec + 2;
        }
        printf("%d    %d     %d\n",two_array[row][0],two_array[row][1],two_array[row][2]);
    }

    // two d character array = 1d array of strings 

    char names[3][10] = // need to assign the numbers here (longest string + 1 for the second # )
    {
        "Harrison",
        "Mairanne",
        "Dat"
    } ;

    int x;

    for(x=0;x<3;x++)
    {
        printf("%s\n",names[x]); //dont need the indicies for the strings themselves 
    }

}