#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int myArray[2][6], number=0, i, j, c=0;
    for (i = 0; i < 2; ++i)
    {
        for (j = 0; j < 6; ++j)
        {
            myArray[i][j] = rand()%12+1;
        }
    }
    printf( "It`s first variant of our array: \n\n\n" );
    for ( i = 0; i < 2; ++i)
    {
        for (j = 0; j < 6; ++j)
        {
            printf( "%d\t", myArray[i][j] );
        }
        printf("\n");
    }
    printf ("\nPleace, get the number of shift: ");
    scanf ("%d", &number);
    printf( "\nIt`s the second variant of the array: \n\n\n" );
    for(int a=1; a<=number; ++a)
    {
        int a=myArray[0][5], b=myArray[1][5];
        for (i=0; i<2; ++i)
        {
            for (j=5; j>=0; --j)
            {
                myArray[i][j]=myArray[i][j-1];
                if (j==0 && i==0)
                {
                    myArray[i][j]=a;
                }
                else
                {
                    if (j==0 && i ==1)
                    myArray[i][j]=b;
                }
            }
        }
    }
    for (i=0; i<2; ++i)
    {
        for (j=0; j<6; ++j)
        {
            printf( "%d\t", myArray[i][j] );
        }
        printf("\n");
    }
    return 0;
}
