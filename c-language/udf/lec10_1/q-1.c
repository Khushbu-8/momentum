#include<stdio.h>

void cube(int a){
	printf("The cube is %d",a*a*a);
}


void main(){
	int a;
	
	printf("Enter any number :");
	scanf("%d",&a);
	cube(a);
}
