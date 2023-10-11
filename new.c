#include<stdio.h>
void main()
{
    int i,j,n,m,l,b;
    printf("enter the size");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    
    for(l=n-1;l>=1;l--)
    { 
        for(m=1;m<=l;m++)
        {
            printf(" *");
        }
        printf("\n");
    }
}
