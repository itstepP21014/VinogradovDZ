#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#define ARR 10

bool checkSorting(int mas[], int size);
void replacement(int mas[], int size);
void output(const int mas[], int size);
void generate(int mas[], int size);

int main()
{
    int mas[ARR];
    int size=ARR;
    srand(time(NULL));
    printf ("\n\n");
    generate(mas, size);
    output(mas,size);
    replacement(mas, size);
    printf ("\n\n");
    output(mas,size);
    return 0;
}

bool checkSorting(int mas[], int size)
{
    int a=0;
    for (int i=0; i<size; ++i)
    {
        if (mas[i]<mas[i+1])
        a+=1;
    }
    if (a<ARR) return 0;
    else return 1;

}

void replacement(int mas[], int size)
{
    while(!checkSorting(mas, size))
    {
        int a1=rand()%size;
        int a2=rand()%size;
        int b=mas[a1];
        mas[a1]=mas[a2];
        mas[a2]=b;
    }
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
