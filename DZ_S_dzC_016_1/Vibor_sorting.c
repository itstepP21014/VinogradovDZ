#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR 10

void generateMas(int mas[], int size);
void printMas(const int mas[], int size);
int checkSorting(const int mas[], int size);
int sorting(int mas[], int size);

int main()
{
    int mas[ARR];
    int size=ARR;
    srand(time(NULL));
    printf ("\n");
    generateMas(mas, size);
    printMas(mas, size);
    printf ("\n\n");
    sorting(mas, size);
    printMas(mas, size);
    return 0;
}

void generateMas(int mas[], int size)
{
    for (int i=0; i<size; ++i)
    {
        mas[i]= rand()%21+13;
    }
}

void printMas(const int mas[], int size)
{
    for (int i=0; i<size; ++i)
    {
        printf ("%d ", mas[i]);
    }
}

int checkSorting(const int mas[], int size)
{
    for(int i=0; i<size-1; ++i)
    {
        if(mas[i]>mas[i+1]) return 0;
    }
    return 1;
}

int sorting(int mas[], int size)
{
    int a=0, b=0, cellNumber=-1, zero=0;
    while ((!checkSorting(mas, size))
        {
            mas[cellNumber]=0;
            for (int i=zero; i<size; ++i)
            {
                mas[cellNumber]=mas[cellNumber]<mas[i]?mas[cellNumber]:mas[i];
                a=mas[cellNumber];
                mas[cellNumber]=mas[i];
                mas[i]=a;
                zero++;
                cellNumber++;
            }
        }
         for(int i=-1; i<size-1;++i)
         {
             a=mas[i];
             mas[i]=b;
             b=a;
         }
}
