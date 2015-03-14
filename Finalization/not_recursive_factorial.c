#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n=0, t=1, answer=t;
    printf ("\n\nEnter the number: ");
    scanf ("%d", &n);
    for (t=1; t<=n; t++)
        answer*=t;
    printf ("\nFactorial %d = %d", n, answer);
    return 0;
}
