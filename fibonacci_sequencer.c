//Written by Mouzakitis Nikoloas,April 2016

#include <stdio.h>
#include <stdlib.h>

int fib(int i)
{

        if ( i == 1)
                return 2;

        else if (i == 2 )
                return 3;

        else if ( i == 0)
                return 0;

        else
                return (fib(i-2) + fib(i - 1));
}

int main(void)
{
        int i,terms;
        printf("Fibbonacci SEQUENCER,by Nikos Mouzakitis.\n");
        printf("This program simulates the fibbonacci sequence up to a given limit of terms.\n");
        printf("Enter your number of terms to be presented.\n");
        scanf("%d",&terms);
        printf("\n\n");

        for(i = 1 ; i <= terms ; i++)
                printf("%d\n",fib(i));
        return 0;
}
