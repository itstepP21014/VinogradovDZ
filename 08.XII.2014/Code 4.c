#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf ("Enter count of values: ");
    scanf( "%d", &number );

    printf ("\nYou enter count = %d", number );
    printf ("\nEnter the sequence of numbers: \n");

    int productNumbers = 1;
    for (int i=0; i<number; i++) \\я использовал цикл for, потому что мне нужно было создать массив чисел. 
    {
        int accountNumbers=i+1;
        printf ( "\nEnter value %d: ", accountNumbers);
        int a;
        scanf ( "%i", &a );
        printf ( "\n  ");
        productNumbers = productNumbers * a;
    }

    printf( "\n Result of multiplication: %i", productNumbers );

    return 0;
}
