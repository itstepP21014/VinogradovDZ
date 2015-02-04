#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char arr[30000];
    char mas[1000];
    int number;
    printf ("\n Get the number of characters: ");
    scanf ("%d", number);
    printf ("\nPleace, get your program at this facking language: ");
    for (int j=0; j<number; ++j)
    {
        scanf ("%d", &mas[j]);
    }
    int k=0;
    for (int i=0; i<30000; i++)arr[i]='0';
    {
        for (int i=0; i<strlen(mas); i++)
        {
            switch(mas[i])
                {
                    case '<':k--;
                    break;
                    case '>':k++;
                    break;
                    case '+':arr[k]++;
                    break;
                    case '-':arr[k]--;
                    break;
                    case '.':putchar (arr[k]);
                    break;
                    case ',':arr[k]=getchar();
                    break;
                }
        }
    }
    return 0;
}
