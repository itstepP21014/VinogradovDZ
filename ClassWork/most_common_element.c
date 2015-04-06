#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main()
{
    srand(time(NULL));
    int mass[SIZE][SIZE], number=0, i, j, mass2[SIZE], max=1;
    for (i = 0; i < 10; ++i)
    {
        for (j = 0; j < 10; ++j)
        {
            mass[i][j] = rand()%11+0;
        }
    }
    for (i = 0; i < 10; ++i)
    {
        for (j = 0; j < 10; ++j)
        {
            printf ("%d\t", mass[i][j]);
        }
        printf ("\n");
    }
    for (i=0; i<10; ++i)
    {
        mass2[i]=0;
    }
    for (i=0; i<10; ++i)
    {
        for (j=0; j<10; ++j)
        {
            mass2 [mass[i][j]-1]+=1;
        }
    }
    for (i=0; i<10; ++i)
    {
        max=max>mass2[i]?max:mass2[i];
    }
    for (i=0; i<10; ++i)
    {
        max=max>mass2[i]?max:mass2[i];
    }
    for (i=1; i<=10; ++i)
    {
        if (mass2[i]== max)
        {
            printf("\n\n\nThe most common element [%d] comes %d times\n", i, mass2[i]);
        }
    }
    return 0;
}
