#include <stdio.h>
#include <stdlib.h>

 int main()
 {
     int a=0, output=0;
     char stack[10];
     int top=-1;
     scanf ("%d", a);
     stack[++top]=a;
     output=stack[--top];
     printf ("%d", output);
     return 0;
 }
