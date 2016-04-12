// written by Mouzakitis Nikolaos,April 2016.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

        int rows,i,j ;
        printf("Enter number of rows:\n");
        scanf("%d",&rows);

        int matrice[rows][rows];
        int matrice2[rows][rows];

        //initializing  the first matrice .
        printf("Initialize the first matrice.\n");

        for(i = 0; i < rows; i++)
        {
                for(j = 0; j < rows; j++)
                {
                        printf("Enter next element:\n");
                        scanf("%d",&matrice[i][j]);
                }
        }

        //initializing  the second matrice .
        printf("initialize the second matrice\n");

        for(i = 0; i < rows; i++)
        {
                for(j = 0; j <rows; j++)
                {
                        printf("Enter next element:\n");
                        scanf("%d",&matrice2[i][j]);
                }
        }

        //printing out first matrice
        printf("First Matrice: \n");
        for(i = 0; i < rows; i++)
        {
                for(j = 0; j <rows; j++)
                {
                        printf("%d ",matrice[i][j]);
                }
                printf("\n");
        }
        //printing out second matrice
        printf("Second Matrice: \n");
        for(i = 0; i < rows; i++)
        {
                for(j = 0; j <rows; j++)
                {
                        printf("%d ",matrice2[i][j]);
                }
                printf("\n");
        }



        //print out the A + B matrice .
        printf("\nPrinting out the (A+B) sum of matrices.\n");
        for(i = 0; i < rows; i++)
        {
                for(j = 0; j <rows; j++)
                {
                        printf("%d ",matrice[i][j] + matrice2[i][j]);
                }
                printf("\n");
        }


        //print out the A - B matrice .
        printf("\nPrinting out the (A - B) difference of matrices.\n");
        for(i = 0; i < rows; i++)
        {
                for(j = 0; j <rows; j++)
                {
                        printf("%d ",matrice[i][j] - matrice2[i][j]);
                }
                printf("\n");
        }

        //print out the 2*a matrice.
        printf("\nPrinting out the 2* (A) matrice.\n");
        for(i = 0; i < rows; i++)
        {
                for(j = 0; j <rows; j++)
                {
                        printf("%d ",matrice[i][j] * 2);
                }
                printf("\n");
        }


        return 0;
}
