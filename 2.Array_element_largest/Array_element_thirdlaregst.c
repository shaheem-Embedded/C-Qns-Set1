#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

void wait_user_entry();
void clear_buffer();
void wait_user_entry();
int operation();
int menu();

int main()
{
	while(1)
	{
	if(menu()!=0)
	{
		continue;
	}
	if(operation()!=0)
		{
			continue;
		}
}
    return 0;
}

int menu()
{
	int option;
	printf("\nEnter Your Option here:\n"
			"1> Enter Limit -\n"
			"2> Exit the window - \n");
	if(scanf("%d",&option)!=1 || option == 0)
			{
		     printf("Wrong Entry..(Entered Characters or '0')..process returns to main menu ..\n");
		     clear_buffer();
		     return -1;
			}
	if(option == 1)
		{
         return 0;
		}
		else if(option == 2)
					{
					wait_user_entry();
					}
	else
		{
		printf("Invalid Entry..Enter option 1 or 2'..process returns to main menu ..\n");
		return -1;
		}
	 return 0;
	}
int operation()
{
	 uint32_t n;
	 printf("\nEnter the limit of elements in the Array : ");
	 if(scanf("%d",&n)!=1)
		 {
		 		printf("Wrong Entry..Enter Digits only..\n");
		 		clear_buffer();
		 		return -1;
		 }
	 if(n > 0)
	 {
	 	    int elements[n];
		 	printf("Enter %d Elements for your array: Enter Digits only: ",n);
		 	for(int i=0;i<n;i++)
		 	{
		 		scanf("%d",&elements[i]);
		 	}
		 	printf("Elements in the array are as ...\n");

		 	for(int i=0;i<n;i++)
		 	{
		 		printf("%d ",*(elements+i));
		 	}
		 	 int largest = elements[0];
		 	 int second_largest =  INT_MIN;
		     int third_largest = INT_MIN;
		 		 for(int i=1;i<n;i++)
		 		 {
		 			 if(elements[i]>largest)
		 			 {
		 				largest = elements[i];
		 			 }
		 		 }
		 		 for(int i=1;i<n;i++)
		 				 		 {
		 			if(elements[i]>second_largest && elements[i]<largest)
		 			 {
		 				second_largest = elements[i];
		 			 }
		 				 		 }
		 		for(int i=1;i<n;i++)
		 			{
		 			if(elements[i]>third_largest && elements[i]<second_largest)
		 			{
		 				third_largest = elements[i];
		 			 }
		 			 }

		 		 printf("\n Largest element in the array is :  %d",largest);
		 		 printf("\n Second Largest element in the array is :  %d",second_largest);
		 		 printf("\n third_largest element in the array is :  %d",third_largest);
	 }
	 else
	 {
	 	printf("Invalid Entry..Please enter valid limit..\n");
	 	clear_buffer();
	 	return -1;
	 }
	 return 0;
}
void clear_buffer()
{
	int c;
	while(( c = getchar())!='\n' || c != EOF);
	}
void wait_user_entry()
{
	while(getchar()!='\n');
	printf("Press 'Enter to Exit the Window >> Thanks!");
	getchar();
	exit(0);
	}
