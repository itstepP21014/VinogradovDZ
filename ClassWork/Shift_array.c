#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int myArray[2][6], number=0, i, j, c=0, s=0;
    for (i = 0; i < 2; ++i)
    {
        for (j = 0; j < 6; ++j)
        {
            myArray[i][j] = rand()%6+1;
        }
    }
    printf( "It`s first variant of our array: \n" );
    for ( i = 0; i < 2; ++i)
    {
        for (j = 0; j < 6; ++j)
        {
            printf( " %d ", myArray[i][j] );
        }
        printf("\n");
    }
    printf ("\nPleace, get the number of shift: ");
    scanf ("%d", &number);
    printf( "\nIt`s the second variant of the array: \n" );
    for(i=1; i<=number; ++i)
    {
        c=myArray[0][5];
        myArray[0][5]=0;
        myArray[0][5]=myArray[1][4];
        myArray[0][4]=0;
        myArray[0][4]=myArray[1][3];
        myArray[0][3]=0;
        myArray[0][3]=myArray[1][2];
        myArray[0][2]=0;
        myArray[0][2]=myArray[1][1];
        myArray[0][1]=0;
        myArray[0][1]=myArray[1][0];
        myArray[0][0]=c;
        myArray[1][5]=0;
        myArray[1][5]=myArray[2][4];
        myArray[1][4]=0;
        myArray[1][4]=myArray[2][3];
        myArray[1][3]=0;
        myArray[1][3]=myArray[2][2];
        myArray[1][2]=0;
        myArray[1][2]=myArray[2][1];
        myArray[1][1]=0;
        myArray[1][1]=myArray[2][0];
        myArray[1][0]=s;
    }
    for (i=0; i<2; ++i)
    {
        for (j=0; j<6; ++j)
        {
            printf( " %d ", myArray[i][j] );
        }
        printf("\n");
    }
    return 0;
}
