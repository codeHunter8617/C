#include<stdio.h>
int main(){
	int x;//dabba ban gaya
	  printf("enter a number :");
	  scanf("%d",&x); //dabba mein value dal gaya
	  if(x%5==0){
		printf("divisible by 5"); //even
	  }
	  else{
		printf("not divisible by 5"); //odd
	  }
	  return 0;
}