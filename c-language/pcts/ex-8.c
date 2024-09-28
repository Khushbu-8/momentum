#include<stdio.h>

//not a right program

void main(){
	
	char str[5],rev[5];
	char a,b,c,d,e;
	printf("Enter string :");
	scanf("%s",str);
	
	a=(str[5]/10000);
	b=(str[5]/1000)%10;
	c=(str[5]/100)%10;
	d=(str[5]/10)%10;
	e=str[5]%10;
	
	rev[5]=e*10000+d*1000+c*100+b*10+a;
		printf("%c\n",rev);
	
	if(str==rev){
		printf("The given string is polindrom..");
	}else{
			printf("The given string is not polindrom..");
	}
	
	

}
