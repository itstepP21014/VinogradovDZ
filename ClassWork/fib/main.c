#include <stdio.h>
#include <stdlib.h>


int fb (int n)
{
    return n>2?fb(n-1)+fb(n-2):1;
}

int main ()
{
    printf ("%d", fb=10);
    return 0;
}
