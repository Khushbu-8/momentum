#include<stdio.h>

//factorial 

void fact(int f){
	printf("pactorial number is %d",f);
}

void main (){
	
	int num, fct=1, i;
	printf("Enter any number :");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++){
		
		fct=fct*i;
		
	}
	fact(fct);
	
	
}
