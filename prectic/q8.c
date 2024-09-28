#include<stdio.h>

void main(){
int n,m, leap[50],cnt=0,i;

   printf("Enter the first number :");
   scanf("%d",&n);
   printf("Enter the second numberm :");
   scanf("%d",&m);
   
   i=n;
   
   printf("Array is :");
   for(i=n; i<=m;i++){
   if(i%4==0||i%400==0||i%100==0){
   	leap[50]=i;
   	
   printf(" %d",leap[50]);
   }
  
   }

}
	
