#include <stdio.h>
int main ()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(((i==1) && (j==1 || (j>n/2))) && ((i>1 && i<=n/2) && (j==1 || j==(n+1)/2)) && ((i==(n+1)/2) && j>=1) && (((i>(n+1)/2) && (i<n)) && (j==(n+1)/2 || j==n) && ((i==n) && (j<=(n+1)/2 || j==n) )))
            printf("*");
            else
            {printf(" ");}
        }printf("\n");
    }
    return 0;
}