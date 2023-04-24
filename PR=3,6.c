#include<stdio.h>

main()
{
	int a=1,n,fect=1;
	printf("Enter Number=");
	scanf("%d",&n);
	
	do
	{
        fect=fect*n;
		n--;
	}while(n>=a);
	printf("Fectorial Value=%d",fect);
}
