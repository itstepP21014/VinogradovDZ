#include <stdio.h>
#include <stdlib.h>
#include "../../modules/compatibility.h"

int main()
{
    printf("I`m the Doctor!\n");
    char enter;
    scanf("%c", &enter);
    universalClerar();
    printf("Allons-y!!!\n");
    universalSleep(1.5);
    universalClerar();
    return 0;
}
