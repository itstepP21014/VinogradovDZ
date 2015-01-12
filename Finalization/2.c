#include <stdio.h>
#include <conio.h>


int main()
{
    int b, count=1;
    scanf ("%d", &b);
    while (b>1)
    {
        b/=10;
        count+=1;
    }
    printf ("%d", count);
	return 0;
}