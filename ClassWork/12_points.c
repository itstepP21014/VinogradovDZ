#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int myArray[5][5], number=0, i, j;
    for (i = 0; i < 5; ++i)
    {
        for (j = 0; j < 5; ++j)
        {
            myArray[i][j] = rand()%12+1;
        }
    }
    printf( "\nThis assessment by the 12-point system: \n" );
    for ( i = 0; i < 5; ++i)
    {
        for (j = 0; j < 5; ++j)
        {
            printf( "%d\t", myArray[i][j] );
        }
        printf("\n");
    }
    for (i=0; i<5; ++i)
    {
        for (j=0; j<5; ++j)
        {
            switch (myArray[i][j])
            {
            case 12:
            case 11:
            case 10:
                myArray[i][j]=5;
                break;
            case 9:
            case 8:
            case 7:
                myArray[i][j]=4;
                break;
            case 6:
            case 5:
            case 4:
                myArray [i][j]=3;
                break;
            case 3:
            case 2:
                myArray [i][j]=2;
                break;
            case 1:
                myArray[i][j]=1;
                break;
            }
        }
    }
    printf( "\nAnd this by the 5-point system: \n" );
    for (i=0; i<5; ++i)
    {
        for (j=0; j<5; ++j)
        {
            printf( "%-d\t", myArray[i][j] );
        }
        printf("\n");
    }
    return 0;
}
