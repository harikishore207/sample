#include<stdio.h>
#include<stdlib.h>

#define r 3
#define c 3

int main()
{
    int matrix[r][c];
    int matrix2[r][c];
    int res[r][c];
    int i,j;
    printf("enter the value for the matrix:\n");


    //getting the input
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",(*(matrix + i)+j));
        }
    }

    //display the output
        for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",*(*(matrix + i)+j));
        }
    }

     printf("enter the value for the matrix2:\n");

     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",(*(matrix2 + i)+j));
        }
    }


     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",*(*(matrix2 + i)+j));
        }
    }


     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           // a[i][j]= b[i][j] + c[i][j];

           *(*(res + i) + j) =  *(*(matrix + i) + j) +  *(*(matrix2 + i) + j);
        }
    }


     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d  ",*(*(res + i)+j));
        }
        printf("\n");
    }
}
