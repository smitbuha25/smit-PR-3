#include<stdio.h>

main()
{
	int n,sum=0,lastdigit,firstdigit;
	printf("Enter Number=");
	scanf("%d",&n);
	
	lastdigit=n % 10;
	
	while(n>=10)
	{
		n = n/10;
	}
	
	firstdigit = n;
	
	sum = firstdigit + lastdigit;
	
	printf("Sum is =%d\n",sum);
}
