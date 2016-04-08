/*--------------------------Program written by Mouzakitis Nikolaos,April 2016.
 -------------------------------------Given two points on a coordinate system, 
---------------------------------------it calculates the equation of the line,
------------------------------------------------------connecting those points.
----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
        double x1,y1,x2,y2 ;
        double lamda,beta;
        printf("Enter coordinates of first point.\n");
        scanf("%lf %lf",&x1,&y1);
        printf("Enter coordinates of second point.\n");
        scanf("%lf %lf",&x2,&y2);

        printf("Equation of line connecting those two points is\n");


        if(x2 == x1 && y2 != y1)

                printf(" x = %.1f",x1);

        else if(x2 != x1 && y2 == y1)

                printf("y = %.1f",y1);

        else if( x1 == x2 && y1 == y2 )
                printf("Error.they are the same points.\n");
        else
        {
                lamda = (y2 - y1) / (x2 - x1) ;
                beta = y1 - ( lamda*x1 ) ;

                printf(" y = (%.1f)*x + %.1f.\n",lamda,beta);

        }

        return (0);
}
