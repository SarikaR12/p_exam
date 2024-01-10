#include<stdio.h>

main()
{
	int i=1 ,n, fac=1;
	
	printf("Enter value N =");
	scanf("%d",&n);
	
	do{
		printf("%d\n",i);
		fac = fac*i;
		i++;
	}while(i<=n);
	
	printf("Factorial Of 1 to N = %d",fac);
}