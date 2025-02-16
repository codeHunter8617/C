#include<stdio.h>
int main(){
	int l,b;
	  printf("enter the values of length and breadth :");
	  scanf("%d%d",&l,&b); 
	  int area=(l*b);
	  int perimeter= 2 *(l+b);
	  if(area>perimeter){
		printf("area is greater than perimeter"); 
	  }
	  else{
		if(area<perimeter){
			printf("area is less than perimeter");
		}
		else{
			printf("area is equal to perimeter");
		}
	  }
	  return 0;
}