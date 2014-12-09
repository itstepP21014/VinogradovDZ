#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, max=1, min=1;
    printf ("Enter count of numbers: ");
    scanf( "%d", &number );

    int c=1, b=1, a;
    printf ("%d, ", c);
    printf ("%d, ", b);
    for (int i=0; i<number-2; i++)
    {
        a=c+b;
        printf ("%i, ", a);
        c=b;
        b=a;
    }
    return 0;
}