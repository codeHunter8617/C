#include<stdio.h>
int main(){
	int a,b,c;
	  printf("enter the values of a,b and c:\n");
	  scanf("%d%d%d",&a,&b,&c); 
	  if(a>b && a>c){
		printf("%d is greatest",a); 
	  }
	if(b>a && b>c){
		printf(" %d is greatest",b); 
	  }
	  if(c>b && c>a){
		printf(" %d is greatest",c);
	  }
	  return 0;
}