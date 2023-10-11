#include<stdio.h>
int main()
{
  int t,d=0,c=0;
  // printf("enter the test cases");
  scanf("%d",&t);
  for (int j=1;j<=t;j++)
  {
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for ( int i=0;i<n;i++)
    {
      // printf("enter the array a");
      scanf("%d",&a[i]);
    }
    for ( int i=0;i<n;i++)
    {
      // for(int k=0;k<n;k++)
      if(i>=1&&i<=n-2)
      {
        b[i]=(a[i]+a[i+1])%2;
      }
      else{
         b[n-1]=(a[n-1]+a[1])%2;
      }
      printf("%d\n",b[i]);
    }
      // for ( int i=0;i<n;i++)
      // {
      //   if(b[i]==0)
      //   {
      //     c++;
      //   }
      //   else{
      //     d++;
      //   }
      // }
      // if(d%2==0)
      // {
//         printf("yes\n");
//       }
//       else{
//         printf("no\n");
//       }
 }
 }


