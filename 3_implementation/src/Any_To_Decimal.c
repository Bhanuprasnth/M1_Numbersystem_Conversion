//this function is used to convert a number from any number system to decimal number system by multiplication of radix
#include "Header.h"
double Any_To_Decimal( int l,int d)
{
	int i;
	double f=1,x=0;
	for(i=0;i<d;i++)
	{
		f/=radix[ins];
	}
	for(i=l-1;i>=0;i--)//multiplication operation 
	{
		if(input[i]=='.')
		{
			continue;
		}
		if(input[i]<58)
		{
			x+=(input[i]-48)*f;
		}
		else
		{
			x+=(input[i]-55)*f;
		}
		f*=radix[ins];
	}
	return x;
}