#include<stdio.h>
#include<conio.h>

void main(){
int i;
	clrscr();
	printf("Enter any number...");
	scanf("%d",&i);
	(i%2==0)?printf("The number is odd...")
		:printf("The number is Even...");

getch();
}