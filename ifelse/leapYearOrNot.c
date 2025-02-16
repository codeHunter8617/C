#include<stdio.h>
int main(){
	int x;
	  printf("enter a year :");
	  scanf("%d",&x); 
	  if(x%4==0 || x%400==0 || x%100==0){
		printf("leap year"); 
	  }
	  else{
		printf("not leap year"); 
	  }
	  return 0;
}