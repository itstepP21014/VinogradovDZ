#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, max=0, min=100000; //if I knew how, I would have equated the min value infinity.
    printf ("Enter count of numbers: ");
    scanf( "%d", &number );
    printf ("\nEnter the sequence of numbers: \n");

    for (int i=0; i<number; i++)
    {
        printf ( "\nEnter the number: ");
        int a;
        scanf ( "%i", &a );

        max=max>a?max:a;
        min=min<a?min:a;
    }

    printf( "\nThe maximum number is: %i", max );
    printf( "\nThe minimum number is: %i", min );

    return 0;
}