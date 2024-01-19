#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
	FILE *fp;
	fp=fopen("data.txt","w");
	char fruites_name[50],color[50];
//	int n;
//	printf("Enter fruites number :");
//	fprintf(fp,"Enter fruites number :");
//	scanf("%d",&n);
//	fprintf("%d",n);
	
    for(int i=1 ; i<=3; i++)
    {
    	
        printf("\n------fruite %d------\n",i);
        
    	printf("\nEnter fruites name:");
		scanf("%[^\n]s",fruites_name);

		
		printf("\nEnter color:");
		scanf("%[^\n]s",color);
		
		
		printf("\n\n=>The fruites %d details are given below\n\n", i);
		fprintf(fp,"\n\n=>The fruites %d details are given below\n\n", i);
		
		printf("fruites_name   : %s\n",fruites_name);
		fprintf(fp,"fruites_name   : %s\n",fruites_name);
		printf("color  : %s\n",color);
		fprintf(fp,"color  : %s\n",color);
	}
	
}