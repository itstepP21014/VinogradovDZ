#include <stdio.h>
#include <conio.h>

int main()
{
    int n, number, count=0; // The program displays the number of ladder.
	printf ("\nEnter the count of numbers: ");
	scanf ("%d", &n);
	printf ("\nEnter the numbers\n");
	for (int i=1; i<=n; ++i)
    {
        char c[]=" ";
        scanf ("%d", &number);
        while (number>0.9)
        {
            number/=10;
            count+=1;
        }
        for (int j=1; j<=count; ++j)
        {
            printf ("%s", c);
        }
    }
	return 0;
}
