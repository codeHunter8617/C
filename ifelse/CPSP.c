#include<stdio.h>
int main(){
	int SP,CP;
	  printf("enter the values of SP & CP :");
	  scanf("%d%d",&SP,&CP); 
	  if(SP>CP){
		printf(" Profit"); 
	  }
	  if(CP>SP){
		printf("loss"); 
	  }
	  if(CP=SP){
		printf("no profit no loss");
	  }
	  return 0;
}