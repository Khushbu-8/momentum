#include<stdio.h>

//Q.1 Write a Program to check whether a string is a palindrome or not without using string functions.
//
//Input:
//Enter any string: nayan
//
//Output:
//Given string is a Palindrome

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

