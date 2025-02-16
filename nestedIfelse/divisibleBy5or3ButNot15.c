#include<stdio.h>
int main(){
	int x;
	  printf("enter a number :");
	  scanf("%d",&x); 
	  if(x%5==0 || x%3==0){
		if(x%15!=0){
		printf("number is divisible by 5 or 3 but not by 15"); 
	  }
	  else{
		printf(" number is divisible by 15"); 
	  }
	  }
	  else{
		printf("the number is not divisible by  5 or 3");
	  }
	  return 0;
}