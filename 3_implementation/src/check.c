//this function is used to check weather the input of the given number system is in the correct fromat
#include "Header.h"
int check()
{
	int i,c=0;
	//for Octal, Binary and Decimal
	if(ins!=2)
	{
		for(i=0;input[i]!='\0';i++)
		{

			if(!(input[i]>=48 && input[i]<48+radix[ins]))//checking weather the number consists of only digits
			{
				if(input[i]=='.')//counting how many decimal points does the number have
				{
					c++;
				}
				else
				{
					return 0;
				}
			}
			if(c>1)
			{
				return 0;
			}
		}
		return 1;
	}
	else
	{
		//for Hexadecimal
		for(i=0;input[i]!='\0';i++)
		{
			if(!((input[i]>=48 && input[i]<48+radix[ins]) || (input[i]>=65 && input[i]<71)))//checking weather the number consists of only digits and alphabet from A-F
			{
				if(input[i]=='.')//counting how many decimal points does the number have
				{
					c++;
				}
				else
				{
					return 0;
				}
			}
			if(c>1)
			{
				return 0;
			}
		}
		return 1;
	}
}