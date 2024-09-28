#include<stdio.h>
#include<conio.h>
void main(){
int number;
clrscr();
printf("Find the minimume value \n");
printf("Enter value : ");
scanf("%d",&number);
if(number>0){
	     printf("positive");
	    }else if(number<0){
			       printf("nagative");
			      }else if (number == 0){
						     printf("neutral");
						    }
getch();

}