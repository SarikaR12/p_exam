#include<stdio.h>

main()
struct movie{
	char movie_Name[100];
	char movie_language[100];
	char movie_gener[100];
};

{
	int n;
	printf("Enter Movie Name = ");
	scanf("%d",&n);
	int i;
	struct movie s[n];
	for(i=0;i<n;i++)
	{
		printf("Enter movie_Name =");
		scanf("%s",&s[i].movie_Name);
		printf("Enter movie_language =");
		scanf("%s",&s[i].movie_gener);
		printf("Enter movie_gener =");
		scanf("%s",&s[i].movie_language);
	}
	printf("\n----------------Movie ----------\n");
	for(i=0;i<n;i++)
	{
		printf("\nMovie Name = %s\n",s[i].movie_Name);
		printf("gener =%s\n",s[i].movie_gener);
		printf("language =%s\n ",s[i].movie_language);
	}
	
}