#include<stdio.h>

void main(){
	
	int num,a,b,c,d,e,rev;
	
	printf("Enter five-digit number :");
	scanf("%d",&num);
	
	a=(num/10000);
	b=(num/1000)%10;
	c=(num/100)%10;
	d=(num/10)%10;
	e=num%10;
	
	rev=e*10000+d*1000+c*100+b*10+a;
	printf("\n%d\n",rev);
	
	if(num == rev){
		printf("\nThe original and revers num is equal");
	}else{
		printf("\nThe original and revers num is not equal");
	}
	
	
}
