#include<stdio.h>

//Q.2 Write a Program to count the frequency of each character in a given string.
//
//Input:
//Enter any string: development
//
//Output:
//Frequency of each letter:
//d => 1
//e => 2
//v => 1
//l => 1
//o => 1
//p => 1
//m => 1
//n => 1
//t => 1

void main(){
	
	char str[100];
	int i ,j ,cnt,n;
	
	printf("Enter string :");
	scanf("%s",&str);
	  
	for(i=0; str[i]; i++);
	n=i;
	
	for(j=0; j<n; j++){
		cnt=1;
		if(str[j])
		{
			for(i=j+1; i<n; i++)
			{
				if(str[j]==str[i])
				{
					cnt++;
					str[i]=NULL;
				}
			}
		 printf(" '%c' = %d \n",str[j],cnt);
		}
		
	}
}
