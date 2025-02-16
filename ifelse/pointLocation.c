#include<stdio.h>
int main(){
	int x,y;
	printf(" enter the coordinates :");
	scanf("%d%d",&x,&y);
	if(y==0 && x==0){
		printf("the point is origin");
	}
	else if(x==0){
		printf("lies on y axis");
	}
	else if(y==0){
		printf("lies on x axis");
	}
	else{
		printf("does not lie on x or y axis");
	}
	return 0;
}