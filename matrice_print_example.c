// written by Mouzakitis Nikolaos,April 2016.

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(void)
{
        int columns,rows,i,j ;
        printf("Enter number of columns and rows:\n");
        scanf("%d %d",&columns,&rows);

        int matrice[columns][rows];

        //initializing an array.
        for(i = 0; i < columns; i++)
                for(j = 0; j <rows; j++)
                        matrice[i][j] = i+j;

        //printing in screen the array.
        printf("Generated Matrice:\n");
        for(i = 0; i < columns; i++)
        {
                for(j = 0; j <rows; j++)
                {
                        printf("%d ",matrice[i][j]);
                }
                printf("\n");
        }

        return 0;
}
