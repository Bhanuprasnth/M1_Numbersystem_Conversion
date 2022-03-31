//this function is used to take all the required inputs
#include "Header.h"
void Input()
{
	int i,c=0;
	char b[10]="Enter";
	printf("Select the input number system\n");
    for(i=0;i<4;i++)//to print the different type of number systems to choose from
	{
		printf("%s %d %s\n",b,i,ns[i]);
	}
	printf("Enter here : ");
	scanf("%d",&ins);//to select the input number system
	while(1)
	{
		printf("\nEnter number : ");
		scanf("%s",input);//to take the input number which we have to convert
		if(check())
		{
			break;
		}
		else
		{
			printf("Invalid input try again");
		}
	}
    printf("\nSelect the required number system\n");
    for(i=0;i<4;i++)//to print the different type of number systems to choose from
	{
		if(i!=ins)
		{
			printf("%s %d %s\n",b,i,ns[i]);		
		}
	}
	printf("Enter here : ");
	
	scanf("%d",&rns);//to select the required number system
}

