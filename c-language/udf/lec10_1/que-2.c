#include<stdio.h>

void div(){
	
		int a;
	
	printf("Enter any number :");
	scanf("%d",&a);
	if(a%2==0||a%3==0){
		printf("The given number is divisible by both 3 & 5");
	}else{
     	printf("The given number is not divisible by both 3 & 5");
	}
}


void main(){

	div();
}
