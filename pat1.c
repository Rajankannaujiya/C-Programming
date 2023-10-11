// multiply two array and store its sum in the third one
#include<stdio.h>
void main()
{ 
    int n,m,o,sum;
    printf("enter the no. of rows");
    scanf("%d",&n);
    printf("ENTER THE NO. OF COLUMN FOR THE matrix 1 and no.of row for matrix 2");
    scanf("%d",&m);
    printf("enter the no. of column for 2 matrix");
     scanf("%d",&o);
    int a[n][m],b[m][o],c[n][o];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<o;j++)
        {
            printf("enter the  elements");
             scanf("%d%d",&a[i][j],&b[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<o;j++)
        {
            sum=0;
            for(int k=0;k<m;k++)
            {
                sum=sum+a[i][k]*b[i][k];
            }
            c[i][j]=sum;
            printf("%d\t",c[i][j]);
        }printf("\n");
    }
}
