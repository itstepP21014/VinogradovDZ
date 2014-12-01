# Домашняя работа

30.XI.2014 г.

Код 1.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("And The Moon And The Stars And The World\n");
    printf("          by Charles Bukowski\n");
    printf("Long walks at night--\n");
    printf("that’s what good for the soul:\n");
    printf("peeking into windows\n");
    printf("watching tired housewives\n");
    printf("trying to fight off\n");
    printf("their beer-maddened husbands.\n");
    return 0;
}





Код 2.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    scanf ("%d %d", &a, &b);
    printf("%d+%d=%d\n", a, b, a+b);
    printf("%d-%d=%d\n", a, b, a-b);
    printf("%d*%d=%d\n", a, b, a*b);
    printf("%d/%d=%d\n", a, b, a/b);
    printf("%d%%%d=%d\n", a, b, a%b);
     return 0;
}





Код 4.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int e;
    scanf ("%d %d %d %d", &a, &b, &c, &e);
    printf("%d\n", 2*a);
    printf(" %d\n", 2*b);
    printf("  %d\n", 2*c);
    printf("   %d\n", 2*e);
     return 0;
}





Код 3.

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

