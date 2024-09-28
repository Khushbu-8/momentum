#include <stdio.h>

/*
Q.1 Write a Program to convert the given string in uppercase without using any string function.

Input:
Enter any string: hello world

Output:
Uppercase string: HELLO WORLD

*/
 
int main()
{
    char a[10] ={'h','e','l','l','o','w','o','r','l','d'};  
    char i;
 
   for(i=0;i<10;i++){
   	a[i]=a[i]-32;
   	printf("%c",a[i]);
   	
   }

 
}
