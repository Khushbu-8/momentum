#include<stdio.h>
#include<conio.h>

void main(){

double  unit,amount,total,surcharge;
	clrscr();
	printf("Enter electricity units..");
	scanf("%lf",&unit);

	if(unit<=50){
	unit=amount*0.50;
       }
       else if(unit<=150)
       {
       amount=25+((unit-50)*0.75);
       }
       else if(unit<=250)
       {
       amount=100+((unit-150)*1.20);
       }
       else
       {
       amount=220+((unit-250)*1.50);
       }
       surcharge=amount*20/100;
       total=surcharge+amount;
	 printf("Electricity Bill is %lf",total);

getch();
}