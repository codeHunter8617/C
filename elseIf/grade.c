#include<stdio.h>
int main(){
	int n;
	  printf("enter a number :");
	  scanf("%d",&n); 
	  if(n>90){
		printf(" A grade\n");
	  }
	  else if(n>80){
		printf(" B+ grade\n");
	  }
	  else if(n>70){
		printf(" B grade\n");
	  }
	  else if(n>60){
		printf(" C++ grade\n");
	  }
	  else if(n>50){
		printf(" C+ grade\n");
	  }
	  else if(n>40){
		printf(" C grade\n");
	  }
	  else{
		printf("fail");
		}

	  return 0;
}