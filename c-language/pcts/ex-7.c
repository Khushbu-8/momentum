#include<stdio.h>

void main(){
	
	int year,i,day;
	
	printf("Enter any year :");
	scanf("%d",&year);
	
	for(i=1; i<year; i++){
		if(i%4==0){
			day=day+366;
		}else{
			day=day+365;
		}
	}
	
	day=day%7;
	
	if(day==1){
		printf("it's Monday on 01/01/%d",year);
	}else if(day==2){
	  	printf("it's Tuesday on 01/01/%d",year);
	}else if(day==3){
	  	printf("it's Wednesday on 01/01/%d",year);
	}else if(day==4){
	  	printf("it's Thursday on 01/01/%d",year);
	}else if(day==5){
	  	printf("it's Friday on 01/01/%d",year);
	}else if(day==6){
	  	printf("it's Saturday on 01/01/%d",year);
	}else if(day==7){
	  	printf("it's Sunday on 01/01/%d",year);
	}
	
	
}
