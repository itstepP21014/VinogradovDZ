#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR 10

void generate(int mas[], int size);
void output(const int mas[], int size);
int sorting (int mas[], int size);

int main()
{
    srand(time(NULL));
    int mas[ARR], size = ARR;
    generate(mas, size);
    printf ("\n");
    output(mas,size);
    printf ("\n");
    sorting (mas, size);
    printf ("\n");
    output(mas,size);
    printf ("\n");
    return 0;
}

void generate(int mas[], int size)
{
    for (int i=0; i<size; ++i)
    {
        mas[i]= rand()%12+22;
    }
}

void output(const int mas[], int size)
{
    for (int i=0; i<size; ++i)
    {
        printf ("%d ", mas[i]);
    }
}

int sorting (int mas[], int size)
{
    for(int i = 0 ; i < size - 1; i++)
    {
       for(int j = 0 ; j < size-i-1; j++)
        {
           if(mas[j] > mas[j+1])
           {
              int tmp = mas[j];
              mas[j] = mas[j+1];
              mas[j+1] = tmp;
           }
        }
    }
}
