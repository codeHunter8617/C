#include<stdio.h>
int main(){
	int a,b,c;
	  printf("enter the values of a,b and c:\n");
	  scanf("%d%d%d",&a,&b,&c); 
	  if(a>b){ //b is out of race
		if(a>c){
			printf("%d is greatest",a);
		}
		else{
			printf("%d is greatest",c);
		}
	  }
	  else{
		if(b>c){
			printf("%d is greatest",b);
		}
		else{
			printf("%d is greatest",c);
		}
	  }
	  return 0;
}