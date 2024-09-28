#include<stdio.h>

void main(){
	
	char str[100];
	int i,len=0,cnt=0;


	printf("Enter any string :");
	scanf("%s",&str);
	
	for(i=0; str[i]!=NULL; i++){
		len++;
	}
	for(i=0;i<len;i++){
		if(str[i]==str[len-i-1]){
			cnt=1;
		}
		else{
			cnt=0;
		}
		
	}
	if(cnt==1){
		printf("string is a Palindrome");
	}else{
		printf("string is not Palindrome");
	}
	
	
	
	
}

