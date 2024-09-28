#include<stdio.h>

void main(){
	int n, sum,avg;

	
	printf("Enter Array size");
	scanf("%d",&n);
	
		int a[n];
		int i;
		
		
	for(i=0; i<n; i++){
		printf("enter a[%d]: ",i);
		scanf("%d",&a[i]);
		
	}
	for (i=0; i<n; i++){
		sum=sum+a[i];
	}
	avg=sum/5;
	
		printf(" Avg is %d",avg);

	
	
	
	
}
