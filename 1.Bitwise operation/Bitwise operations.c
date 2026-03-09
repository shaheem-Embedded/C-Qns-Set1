#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

void d2b(int num);
void clear_buffer();
void set_bit(int num,int position);
void clear_bit(int num,int position);
void toggle_bit (int num,int position2);
int entry();
int main()
{
	int num,position,position1,position2;
	while(1)
	{
		if(entry()!=0)
		{
		continue;
		}
			printf("Enter the Decimal number: \n");
					//scanf("%d",&num);
					if(scanf("%d",&num) != 1)
					{
						clear_buffer();
						printf("Enter correct decimal number.. ");
						continue;
					}
						printf("Enter the Position to set: \n");
						scanf("%d",&position);
						printf("Enter the Position to clear: \n");
						scanf("%d",&position1);
						printf("Enter the Position to toggle: \n");
						scanf("%d",&position2);
						printf("Decimal to binary converted result is :");
						    d2b(num);
							set_bit(num,position);
							clear_bit(num,position1);
							toggle_bit (num,position2);
	}
	return 0;
	}

void d2b(int num)
{
	for(int i =7;i>=0;i--)
	{
		if(num & (1<<i))
		{
		 	printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
void set_bit(int num,int position)
{
	 num |= (1<<position);
	 printf("\nThe resulted binary value after bit clear in the entered position is : ");
	 d2b(num);
}
void clear_bit(int num,int position1)
{
	 num &= ~(1<<position1);
	 printf("\nThe resulted binary value after bit set in the entered position is : ");
	 d2b(num);
}
void toggle_bit (int num,int position2)
{
	 num ^= (1<<position2);
	 printf("\nThe resulted binary value after bit toggle in the entered position is : ");
	 d2b(num);
}
void clear_buffer()
{
	int c;
	while ((c= getchar()) != '\n' && c != EOF);
}
int entry()
{
	int option;
	printf("Enter Below option..\n"
			"1> Proceed for bit operations.."
			"2> Exit..");
	if(scanf("%d",& option)!=1)
	{
		printf("Invalid Entry..Please enter valid input \n");
		clear_buffer();
		return -1;
	}
	if(option == 1)
	{

		return 0;
	}
	else if (option == 2)
	{
	   //clear_buffer();
	   getchar();
	   printf("Press Enter to close the Window..\n");
       getchar();
       //return 0;
       exit(0);
	}
	else
	{
		printf("\nInvalid option..Please enter correct option..\n");
		clear_buffer();
		return -1;
	}

	//return 0;
}
