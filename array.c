// Program to find the sum of principle and diagonal elements of a Matrix

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int A[10][10],n,m,i,j;
   int sum1=0,sum2=0;

   printf("Enter the order of matrix : ");
   scanf("%d %d", &n, &m);

   printf("Enter the elements of Matrix :\n ");
   for (i=0; i<n; i++)
   {
       for(j=0; j<n; j++)
       {
           printf("\nEnter A%d%d element : ", i+1, j+1);
           scanf("%d", &A[i][j]);
       }
   }
   printf("Matrix is :\n");
   for (i=0; i<n; i++)
   {
       for (j=0; j<n; j++)
       {
           printf("\t%d", A[i][j]);
       }
       printf("\n");
   }
   for (i=0; i<n; i++)
   {
       for (j=0; j<n; j++)
       {
           if (i==j)
           {
               sum1+=A[i][j];
           }
       }
   }
   printf("\nSum of Principle Diagonal elements is %d\n", sum1);
   for (i=0; i<n; i++)
   {
       for (j=0; j<n; j++)
       {
           if (i+j+2==n+1)
           {
               sum2+=A[i][j];
           }
       }
   }
       printf("\nSum of Secondary Diagonal elements is %d\n", sum2);
          return 0;
}

