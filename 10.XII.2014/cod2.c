#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, p, result2;
    double result1;
    printf ("Enter number: ");
    scanf( "%d", &x );
    printf ("\nEnter the second number: ");
    scanf ( "%d", &p );
    if (p<0)
    {
        result1=1.0;
        p=-p;
        for (int i=1; i<=p; ++i)
        {
            result1=result1*x;
        }
        result1=1/result1;
        printf( "\nResult is: %.11f", result1);
    }
    else
    {
        result2=1;
        for (int i=1; i<=p; ++i) //it is realu easy to solve this task through the "for".
        {
            result2=result2*x;
        }
        printf( "\nResult is: %d", result2);
    }
    return 0;
}
