#include<stdio.h>
#include<conio.h>
void main(){
int x,y,z,sum=0;
clrscr();
printf("Find the formula (x/y)*z \n");
printf("Enter value of x : ");
scanf("%d",&x);
printf("Enter value of y : ");
scanf("%d",&y);
printf("Enter value of z : ");
scanf("%d",&z);
sum=(x/y)*z;
printf("Ans is %d",sum);
getch();
}