#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
    scanf("%d",&t);
	while(t--)
	{
	    int n,m,k;
	    scanf("%d%d%d",&n,&m,&k);
	   // for(int j=1;j<An;j++)
	   // {
	   //     int noofweeds;
	   //     for(int i=1;i<=n;i++)
	   //     {
	   //         noofweeds=noofweeds+i;
	   //     }
	   // }
	    if(k<=m)
	    printf("yes");
	    else
	    printf("n0");
        break;
	}
	return 0;
}

