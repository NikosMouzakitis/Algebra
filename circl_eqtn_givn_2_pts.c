   /*------------------------Written by Mouzakitis Nikolaos,April 2016.---------------
   --------------------------This program calculates the equation of a circle,--------
   --------------------------which got endpoints of its diameter two given points.----
   -------------------------------2016------------------------------------------------
   */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void inner_circle_equation(double x1,double y1,double x2,double y2)
{
        double radius = ( sqrt( pow(x2-x1,2.0) + pow(y2-y1,2.0) )  )/ 2.0;

        double cx,cy;

        if(x1 == x2 && y1 == y2)
        {
                printf("Only one point given.No circle can be defined.\n");
                exit(1);
        }

        cx = (x2 + x1)/2  ;
        cy = (y2 + y1)/2  ;

        printf("The equation of inner circle including the given points is:\n");
        printf("(x - %.3f)^2 + (y - %.3f)^2 = (%.3f)^2",cx,cy,radius);

}


int main(void)
{
        double x1,y1,x2,y2 ;


        printf("Enter the first point's coordinates:\n");
        scanf("%lf %lf",&x1,&y1);

        printf("Enter second point's coordinates:\n");
        scanf("%lf %lf",&x2,&y2);

        inner_circle_equation(x1,y1,x2,y2);

        return (0);
}
