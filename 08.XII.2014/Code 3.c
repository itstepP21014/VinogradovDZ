#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i=1, x=1, number=1; i<=17; ++i, x+=2, ++number)
    {
        printf( "%d. %d^3=%d\n", number, x, x*x*x);
    }
    return 0;
}