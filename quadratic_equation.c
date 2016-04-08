/*Function written by Mouzakitis Nikolaos,April 2016.
Finds solution on two equations with x in power of 2.(using the known formulae).

*/

void  quadratic_equation(int a,int b,int c)
  {
 
          int discr = b*b - 4*a*c ;
 
          if(discr < 0)
                  printf("No solutions availiable \n");
          else
                  if (discr == 0)
                          printf(" One solution twice : %.2f \n",(float) (-b ) / (2*a));
                  else
                  {
                          float m,n ;
                          m = ((-b) + sqrt(discr)) / 2*a ;
                          n = ((-b) - sqrt(discr)) / 2*a ;
                          printf("Two solutions : %.2f , %.2f \n",m,n);
                  }
 
 }
