#include<stdio.h>
int main(){
	int x1,x2,x3,y1,y2,y3;
	printf("enter the values of x1,x2,x3,y1,y2,y3:\n");
	scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&y1,&y2,&y3);
	double m1=(y2-y1)/(x2-x1);
	double m2=(y3-y2)/(x3-x2);
	if(m1==m2){
		printf("points lie on one straight line");
	}
	else{
		printf("points never lie on one straight line");
	}
	return 0;
	
}