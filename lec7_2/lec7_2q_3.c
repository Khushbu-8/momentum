#include<stdio.h>

/*
    5
   44
  333
 2222
11111

*/

void main(){
	
int i,j,s;

for(i=5; i>=1; i--){
	for(s=1; s<=i; s++){
		printf(" ");
	}
	
	for(j=i; j<=5; j++){
		printf("%d",i);
		
	}
	printf("\n");
}
}

