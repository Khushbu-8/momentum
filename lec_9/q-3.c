#include <stdio.h>

/*
Q.3 Write a Program to convert the given string in toggle case without using any string function.
For example,
Input:
Enter any string: HelLo worLD

Output:
Toggle case string: hELlO WORld
*/
 
int main()
{
    char a[10] ={'H','e','L','L','o','w','o','r','L','D'};  
    char i;
 
   for(i=0;i<10;i++){
    if(a[i] >= 'A' && a[i] <= 'Z') {
    	 a[i] = a[i] + 32; 
	}else if(a[i] >= 'a' && a[i] <= 'z'){
		 a[i] = a[i] - 32;
	}
   	
   	printf("%c",a[i]);
   	
   }


 
   
   
   
   
 
}
