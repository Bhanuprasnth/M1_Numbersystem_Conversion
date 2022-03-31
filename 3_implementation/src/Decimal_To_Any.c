//this function is used to convert number of decimal syetem into any reqiured number system by continuos division for integral number and multiplication for decimal point numbers
#include "Header.h"
void Decimal_To_Any(double x,int d)
{
	int i,y=(int)x,t,l=0;
	char a[100],c;
	double t1,f=x-y;
	while(y)//continous division
	{
		t=y%radix[rns];
		if(t<10)
		{
			a[l]=48+t;
			l++;
		}
		else
		{
			a[l]=55+t;
			l++;
		}
		y=y/radix[rns];
	}
	for(i=0;i<(l/2);i++)//we have to reverse the digits obtained in continous division operation to obtain correct order
	{
		c=a[i];
		a[i]=a[l-i-1];
		a[l-i-1]=c;
	}
	if(d)
	{
		a[l]='.';
		l++;
		for(i=0;i<5 && f!=0;i++)
		{
			t1=f*radix[rns];
			t=(int)t1;
			f=t1-t;
			if(t<10)
			{
				a[l]=48+t;
				l++;
			}
			else
			{
				a[l]=55+t;
				l++;
			}
		}
	}
	a[l]='\0';
	printf("\nInput %s : %s\nOutput %s : %s\n",ns[ins],input,ns[rns],a);
}