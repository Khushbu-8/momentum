#include<stdio.h>

int roman(int y){
	
	if(y>=1000){
		printf("M");
		roman(y-1000);
	}else if(y>=500){
		printf("D");
		roman(y-500);
	}else if(y>=100){
		printf("C");
		roman(y-100);
	}else if(y>=50){
		printf("L");
		roman(y-50);
	}else if(y>=10){
		printf("X");
		roman(y-10);
	}else if(y>=5){
		printf("V");
		roman(y-5);
	}else if(y>=1){
		printf("I");
		roman(y-1);
	}
	return roman;
	
}

void main(){
	int year;
	
	printf("Enter year :");
	scanf("%d",&year);
	
	roman(year);
		

}
