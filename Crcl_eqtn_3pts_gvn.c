#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Solution formula based on "Spheres, equations and terminology"
            (Written by Paul Bourke-1992)
   Program written by Mouzakitis Nikolaos,April 2016. */


double distance(double x1,double y1,double x2,double y2)
{
        double dist ;
        dist = sqrt( pow(x2 - x1,2.0) + pow( y2 - y1,2.0));

        return dist;
}



void circle_equation(double x1,double y1,double x2,double y2,double x3,double y3)
{

        double cx,cy,la,lb,radius;

        la = (y2 - y1)/(x2 - x1) ;
        lb = (y3 - y2)/(x3 - x2) ;
        if(x1 == x2 && y1 == y2)
        {
                printf("Not three points different to each others.\n");
                exit(1);
        }

        else if(x2 == x3 && y2 == y3)
        {
                printf("Not three points different to each others.\n");
                exit(1);
        }
        else if(x1 == x3 && y1 == y3)
        {
                printf("Not three points different to each others.\n");
                exit(1);
        }
        else if(la == lb)
        {
                printf("The points all belong in the same line.No circle can got them 3 together.\n");
                exit(1);
        }

        cx = ( la*lb*(y1 - y3) + lb*(x1 + x2) - la*(x2 + x3)) / (2*(lb - la)) ;
        cy = -(1/la) *( cx - (x1 + x2)/2 ) + (y1+y2)/2 ;

        radius = distance(x1,y1,cx,cy);

        printf("Equation of circle including all three points:\n");
        printf("(x - %.4f)^2  + (y - %.4f)^2 = (%.4f)^2.",cx,cy,radius);

}


int main(void)
{

        double x1,y1,x2,y2,x3,y3 ;

        printf("Enter 1st point's coordinates:\n");
        scanf("%lf %lf",&x1,&y1);

        printf("Enter 2nd point's coordinates:\n");
        scanf("%lf %lf",&x2,&y2);

        printf("Enter 3rd point's coordinates:\n");
        scanf("%lf %lf",&x3,&y3);

        circle_equation(x1,y1,x2,y2,x3,y3);


        return (0);
}
