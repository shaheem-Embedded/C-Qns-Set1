#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>


int main()
{
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=i;j++)
		{
		printf("*");
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");

	for (int i =1;i <=10;i++)
	    {
	        for (int j=1;j<=10-i;j++)
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

     	for (int i=0;i<10;i++)
		    {
		        for (int j=0;j<10-i;j++)
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
