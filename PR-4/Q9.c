#include<stdio.h>

/*
11
12 13
14 15 16
17 18 19 20
21 22 23 24 25

*/

void main(){
	
int i,j,k=1;
char c='A';

 for(i=1; i<=5; i++){
	
	
	for(j=1; j<=i; j++){
		if(j%2==0){
			printf("%d",k);
			k++;
		}else{
		
		printf("%c",c);
		c++;
	}
	}
	printf("\n");
}
}

