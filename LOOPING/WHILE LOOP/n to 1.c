#include<stdio.h>

main()
{
	int n;
	int a=1;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	while(n>=a)
	{
		printf("%d  ",n);
		n--;
	}
}
