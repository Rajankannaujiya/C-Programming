#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long int R;
	    scanf("%d",&R);
	    if (R>=1&&R<=50)
	    {
	        printf("100\n");
	    }
	    else if(R>=51&&R<=100)
	    {
	        printf("50\n");
	    }
	    else
	    {
	        printf("0\n");
	    }
	}
	return 0;
}
