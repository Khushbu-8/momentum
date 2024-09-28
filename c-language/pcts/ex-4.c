#include<stdio.h>

void main (){
	
	int cp,sp,loss,pft;
	
	printf("Enter cost price : ");
	scanf("%d",&cp);
	printf("Enter selling price : ");
	scanf("%d",&sp);
	
	if(cp<sp){
		pft=sp-cp;
		printf("profit is %d",pft);
	}else{
		loss=cp-sp;
		printf("Loss is %d",loss);
		
	}
}
