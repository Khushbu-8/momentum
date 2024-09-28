#include<stdio.h>

void leap(ly){
	
	
	if(ly%400==0||ly%4==0||ly%100==0){
		printf("%d  is leap year..",ly);
	
	}else{
	printf("%d  is not a leap year..",ly);
	
	}
	
	
}

void main(){
	
	int year;
	
	printf("Enter year :");
	scanf("%d",&year);
	
	leap(year);
	
	
}
