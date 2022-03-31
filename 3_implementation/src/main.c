#include "Header.h"
char ns[4][20]={"Binary","Octal","Hexadecimal","Decimal"};///"ns/" indicates number system
int radix[4]={2,8,16,10};// radix for number system, 2 for Binary, 8 for Octal, 16 for Hexadecimal, 10 for Decimal
char input[100];
int rns,ins;///"ins/" indicates input number system, /"rns/" indicates required number system
int main()
{
	double x=0;
	int c=1;
	int i,d,l,ch;
	while(c)
	{
		system("cls");
		Input();
		d=0;
		l=0;
		ch=0;
		for(i=0;input[i]!='\0';i++)
	    {
			if(input[i]=='.')
		    {
			    ch=1;
		    }
		    else if(ch)
		    {
			    d++;
		    }
		    l++;
	    }
        x=Any_To_Decimal(l,d);
	    if(rns!=3)//dont have to call when the required number system is decimal which we have already converted to
	    {
	    	Decimal_To_Any(x,d);
	    }
	    else
	    {
	     	printf("\nInput %s : %s\nOutput %s : %g\n",input,ns[ins],ns[rns],x);	
	    }
		printf("\nDo you want to try again press 1 or 0 to exit: ");
		scanf("%d",&c);
	}
}