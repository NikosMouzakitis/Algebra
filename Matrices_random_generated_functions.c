//Written by Mouzakitis Nikolaos,April 2016.
#include <stdio.h>
#include <stdlib.h>

// create_matrice need the number of columns and rows.returns a pointer to the matrice.
int * create_matrice(int columns,int rows)
{
        int *mat;
        mat = malloc( columns *rows *sizeof(int));


        return mat;
}


// arguments is the pointer to the matrice,columns and rows.prints the output to the screen.
void print_matrice(int *mat,int columns,int rows)
{
        int i,j;
        printf("Printing the matrice: \n");

        for(i=0;i<columns;i++)
        {
                for(j=0;j<rows;j++)
                {
                        printf("%d\t",*(mat+i+j));
                }
                printf("\n");
        }

}

// initializes the matrice with random numbers.
void random_init(int *mat,int columns,int rows)
{
        int i,j;

        for(i=0;i<columns;i++)

                for(j=0;j<rows;j++)

                        *(mat+i+j) = rand()%10 + 1;
}

// liberating the space allocated to the matrice.
void free_mat(int *mat)
{

        free(mat);

}

int main(void)
{

        int columns,rows,*mat;

        printf("Enter the number of columns.\n");
        scanf("%d", &columns);

        printf("Enter the number of rows.\n");
        scanf("%d", &rows);

        mat = create_matrice(columns,rows);

        random_init(mat,columns,rows);

        print_matrice(mat,columns,rows);

        free_mat(mat);

        return 0;

}
