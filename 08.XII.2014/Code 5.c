#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    scanf ("%d\n%d\n", &a, &b);
    printf ("The result is: ");
    c=a;
    for (int i=1; i<b; i++)
    {
        a=c*a;
    }
    printf ("%d", a);
    return 0;
}