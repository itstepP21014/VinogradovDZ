#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf ("%d", &a);
    for (int i=1; i<=a; i=i+1) \\ я использовал цикл for... потому что он мне показалось удобнее, в данной ситуации. 
    {
        printf ("%d ", i);
    }
    return 0;
}