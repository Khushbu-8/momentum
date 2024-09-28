#include<stdio.h>

/*
        5
      4 5 4
    3 4 5 4 3
  2 3 4 5 4 3 2
1 2 3 4 5 4 3 2 1


*/

void main(){
	
int i,j,s;

for(i=6; i>=1; i--){
	for(s=1; s<=i; s++){
		printf(" ");
	}
	
	for(j=1; j<=1; j++){
		printf("%d",j);
		
	}
	for(s=i; s<=4; s++){
		printf("  ");
	}
	for(j=1; j>=s; j--){
		printf("%d",j);
		
	}
	printf("\n");
}
}

