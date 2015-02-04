#include <stdio.h>
#include <stdlib.h>
#include "../../modules/compatibility.h"
#include <math.h>


int main()
{
    int position=0, adding=1;
    double M_PI=acos(-1.0);
    while (1)
    {
        for (int i=0; i<position;++i)
        {
            printf (" ");
        }
        printf ("#\n\n");
        universalSleep(1.0/(4*sin(2.0*M_PI*position/39)+4.5));
        universalClerar();
        if (position<0||position>=40)
        {
            adding=-adding;
        }
        position+=adding;
    }
    return 0;
}
