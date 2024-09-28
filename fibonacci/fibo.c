#include<stdio.h>

void main(){
	int n1=0,n2=1,n3,n=5;
	
	
	printf("%d\n%d\n",n1,n2);
	n=n-2;
	
	while(n){
		n3=n1+n2;
		printf("%d\n",n3);
		n1=n2;
		n2=n3;
		
		n=n-1;
	}
	
}
