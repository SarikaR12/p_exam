#include<stdio.h>

main()
{
	char name[]="sArIkA";
	int i;
	
	printf("string of occurence = ");
	if(name[0]>=65 && name[0]<=90)
	{
		printf("%c",name[0]);
	}
	else
	{
		printf("%c",name[i]-32);
	}
	for(i=1;name[i]!=NULL;i++)
	{
		if(name[i]>=97 && name[i]<=122)
		{
			printf("%c",name[i]);
		}
		else
		{
			printf("%c",name[i]+32);
		}
	}
}