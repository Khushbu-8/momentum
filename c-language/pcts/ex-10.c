#include<stdio.h>

void main(){
	
int i,j;
char c='A',k='A';

 for(i=1; i<=5; i++){
	
	
	for(j=1; j<=i; j++){
		if(i%2==1){
			printf("%d",j);
			
		}else{  
		
		printf("%c",c);
		c++;
	}
	}
	printf("\n");
}

for(i=5; i>=1; i--){
	
	
	for(j=1; j<=i-1; j++){
		if(i%2==1){
			printf("%c",k++);
			
		}else{
		
		printf("%d",j);
		
	}
	}
	printf("\n");
}
 
}
