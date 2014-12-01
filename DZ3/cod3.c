#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    double c;
    double l;
    scanf ("%d %d", &a, &b);
    c = 3.14*a*(a+(sqrt(a*a+b*b)));
    l = (3.14*a*a*b)/3;
    printf("%0.0f %0.0f\n", c, l);
    return 0;
}
