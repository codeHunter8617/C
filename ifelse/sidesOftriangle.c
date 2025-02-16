#include<stdio.h>
int main(){
	int a,b,c;
	  printf("enter the values of a,b and c:\n");
	  scanf("%d%d%d",&a,&b,&c); 
	  if(a+b>c && b+c>a && c+a>b){
		printf("valid triangle");
	  }
	  else{
		printf("invalid triangle");
	  }
	  return 0;
}