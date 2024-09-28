
#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c;
clrscr();
printf("Etnter value of a: ");
scanf("%d",&a);
printf("Etnter value of b :");
scanf("%d",&b);
c=a+b;
a=c-a;
b=c-b;
printf("Ans a %d\n",a);
printf("Ans b %d",b);
getch();

}