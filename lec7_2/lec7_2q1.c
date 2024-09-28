#include<stdio.h>


void main(){
/*	
    1  
   21  
  321
 4321
54321

*/	
int i,j,s;

for(i=1; i<=5; i++){
	for(s=4; s>=i; s--){
		printf(" ");
	}
	
	for(j=i; j>=1; j--){
		printf("%d",j);
		
	}
	printf("\n");
}
}

