#include <stdio.h>
#include <stdlib.h>

int main()
{
    char stack[10];
    char hom;
    for (int i=0; i<10; i++)
    {
        stack[i]=0;
    }
    printf ("\n\nPleace, get the brackets: ");
    do{
        scanf ("%c", &hom);
        if (hom=='(') stack[1]+=1;
        if (hom==')') stack[1]-=1;
        if (hom=='{') stack[2]+=1;
        if (hom=='}') stack[2]-=1;
        if (hom=='[') stack[3]+=1;
        if (hom==']') stack[3]-=1;
    }while(hom!='\n');
    if (stack[1]!=0) printf ("\nIncorrect placement of brackets ( )");
    if (stack[2]!=0) printf ("\nIncorrect placement of brackets { }");
    if (stack[3]!=0) printf ("\nIncorrect placement of brackets [ ]");
    return 0;
}