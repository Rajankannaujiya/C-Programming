#include<stdio.h>
void main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {   if (i==1)
        for(int j=1;j<=2*n;j++)
        {   if (j<n && j>1)
            printf(" ");
            else
            { printf("*");}
        }
       if (i>1 && i<n)
       for (int k=1;k<=n;k++)
       {if (k==1 && k==n)
       printf("*");
       else
       {printf(" ");}}
       printf("\n");
    }
}