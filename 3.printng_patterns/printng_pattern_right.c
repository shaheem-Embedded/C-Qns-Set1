#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

int main()

{
	int n;
	printf("Enter the No of * to be displayed for the Patterns: ");
	scanf("%d",&n);
    getchar();
	printf("  Left Half pyramid : \n");
	printf("--------------------- \n");
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
		printf("*");
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	printf(" Right Half pyramid : \n");
	printf("--------------------- \n");
	for (int i =1;i <=n;i++)
	    {
	        for (int j=1;j<=n-i;j++)
	        {
	            printf(" ");
	        }
	        for (int k=1;k<=i;k++)
	        {
	            printf("*");
	        }
	        printf("\n");
	    }
        printf("\n");
	    printf("\n");
		printf("    Full Pyramid : \n");
		printf("-------------------- \n");
     	for (int i=0;i<n;i++)
		    {
		        for (int j=0;j<n-i;j++)
		        {
		            printf(" ");
		        }

		        for (int k=0; k<=2*i; k++)
		        {
		            printf("*");
		        }
		        printf("\n");
		 }
	getchar();
	return 0;
}

