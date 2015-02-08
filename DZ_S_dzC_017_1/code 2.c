#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stack[1000];
    char arr [1000];
    for (int i=0; i<1000; i++)
    {
       stack[i]=0;
    }
    for (int i=0; i<1000; i++)
    {
       arr[i]=0;
    }
    int top=0, top2=0, input=0, output=0;
    stack[-1]=top;
    arr[-1]=top2;
    printf ("\nEnter a formula in the format of RPN\n");
    do{
            scanf ("%d", &input);
            switch (input)
            {
                case '%d': scanf ("%d", stack[top]); ++top; break;
                case '%c': scanf ("%c", arr[top2]); ++top2; break;
            }
    }while (input!='\n');
    while (stack[top]!=stack[0])
    {
        output=stack[top];
        --top;
        stack[top]=output+top;
        printf ("%d", stack[top]);
    }
    return 0;
}