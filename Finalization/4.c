#include <stdio.h>
#include <stdlib.h>

int main()
{
    int width, hight, p, str;
    printf("Enter the length and width:\n");
    scanf("%d%d", &width, &hight);
    for(str=1; str<=width; str++){
        for(p=1; p<=hight; p++){
            if(str%2==0){
                if(p%2==0){
                    printf("*");
                }
                else{
                   printf(" ");
                }
            }
            else{
                if(p%2==0){
                    printf(" ");
                }
                else{
                    printf("*");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
