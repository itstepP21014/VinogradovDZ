#include <stdio.h>
#include <stdlib.h>

int main()
{
    int result, number, a, b=1;
    printf ("Enter number: ");
    scanf( "%d", &number );
    printf ("\nEnter the second number: ");
    scanf ( "%d", &a );
    result=number;
    while (b!=a);
    {
        result=result*number;
        ++b;
    }
    printf( "\nResult is: %d", result);
    return 0;
} \\ � � ���� �� ���� ��� ������� ������. ������, ������-�� ��������� �� ��������. ������? 