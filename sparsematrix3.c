#include<stdio.h>
#include<stdlib.h>
#define MAX 100

typedef struct
{
         int row;
         int col;
         int val;
}sparse;

void readsparse(sparse a[], int m, int n)
{
         int i, j, k, item, p,sp=0;
         a[0].row = m;
         a[0].col = n;
         k = 1;

        printf("\nEnter the elements:\n");
        for(i=0; i<m; i++)
       {
              for(j=0; j<n; j++)
             {
                    scanf("%d", &item);
                    if(item == 0){
                        sp+=1;
                        continue;}
                        
                    a[k].row = i;
                    a[k].col = j;
                    a[k].val = item;
                    k++;
               }
        }
        a[0].val = k-1;

        printf("\nThe entered sparse matrix is:\n");
        for(p=0; p<=a[0].val; p++)
        {
                 printf("%d\t", a[p].row);
                 printf("%d\t", a[p].col);
                 printf("%d\n", a[p].val);
         }
         float sparsity = (float)(a[0].row * a[0].col - a[0].val) / (a[0].row * a[0].col);
         
         printf("\n sparsity of matrix %.3f",sparsity);
}

void main()
{
           int m, n;
           sparse a[MAX];
           printf("\nEnter  the no of rows and columns:\t");
           scanf("%d%d",&m, &n);
           readsparse(a, m, n);
}