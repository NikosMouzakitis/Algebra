
/* "Prime Numbers And Properties"
   Written by Mouzakitis Nikolaos
  ,April 2016
*/

#include <stdio.h>
#include "biblioteca.h"
#include <stdlib.h>


int main(int argc,char *argv[])
{

        int combo,N,cnt,array_cnt = 0;
        printf("Enter your search range.\n");
        scanf("%d",&N);
        int prarray[N] ;

        printf("Program presenting properties on prime numbers.\n");
        printf("*Dist.ToNext-the distance to the next prime number.\n");
        printf("*HwManyTimes(2)- the integer part of the prime divided by 2.\n");
        printf("*combo1 - Checks if the sum of two primes minus 1 is a prime number.\n");
        printf("\n");

        prarray[N-1] = 5;


        // initializing and storing prime numbers in our array.
        for(cnt = 2; prarray[N-1] == 5 ; cnt++)
                {
                        if(isPrime(cnt))
                        {
                                prarray[array_cnt] = cnt;
                                array_cnt ++;
                        }
                }

        //printing the results on screen.
        printf("Prime\tDist.ToNext\tHwManyTimes(2)\n");
        for(cnt = 0 ; cnt < N; cnt ++)
        {

                if (cnt == N-1)
                        printf("%d\t    \t\t%d\n",prarray[cnt],(int)prarray[cnt]/2);
                else
                        printf("%d\t  %d\t\t%d\n",prarray[cnt],prarray[cnt+1] - prarray[cnt],(int)prarray[cnt]/2);
        }

        printf("\n");
        printf("Combo 1 search results.\n\n");

        for(cnt = 0; cnt < N ; cnt ++)
        {
                combo = combo1(prarray[cnt],prarray[1]);
                if(combo)
                        printf("%d , %d resulting prime %d \n",prarray[cnt],prarray[1],prarray[cnt] + prarray[1] -1);
        }








        return (0);
}

