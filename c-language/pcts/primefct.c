#include<stdio.h>

int prime(int num){
	
	int i;   
	
	for(i=2;num>1; i++){
		while(num%i==0){
			printf("%d ",i);
			num=num/i;
		}
	}
	
	return i;
	
	
}

void main(){
	int number;
	printf("Enret any number :");
	scanf("%d",&number);
	
	prime(number);
}
