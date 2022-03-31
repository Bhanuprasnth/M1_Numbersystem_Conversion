#include<stdio.h>
#include<stdlib.h>
#ifndef Header_H_INCLUDED
#define Header_H_INCLUDED
int check();
void Input();
double Any_To_Decimal(int ,int );
void Decimal_To_Any(double ,int );
#endif
extern char ns[4][20];
extern int radix[4];
extern char input[100];
extern int rns,ins;