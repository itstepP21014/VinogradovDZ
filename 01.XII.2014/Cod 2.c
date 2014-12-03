#include <stdio.h>
#include <stdlib.h>

int main()
{
    char mama[]="mama";
    char mila[]="mila";
    char Ramy[]="Ramy";
    printf("%s %s %s\n", mama, mila, Ramy);
    printf("%s %s %s\n", mama, Ramy, mila);
    printf("%s %s %s\n", mila, Ramy, mama);
    printf("%s %s %s\n", mila, mama, Ramy);
    printf("%s %s %s\n", Ramy, mama, mila);
    printf("%s %s %s\n", Ramy, mila, mama);
    return 0;
}
