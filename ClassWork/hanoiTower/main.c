#include <stdio.h>
#include <stdlib.h>

void hanoi(int d, char from, char to, char helper)
{
    static int f=0;
    if (d>0)
    {
        hanoi(d-1, from, helper, to);
        printf ("%c -> %c %d\n", from, to, f);
        ++f;
        hanoi(d-1, helper, to, from);

    }

}

int main()
{
    hanoi(4, 'A', 'B', 'C');
    return 0;
}
