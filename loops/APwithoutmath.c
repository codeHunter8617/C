#include<stdio.h>
int main(){ 
	int n;
	printf("enter a num :");
	scanf("%d",&n);
	int a=4;
	for(int i=1;i<=n;i=i++){ 
		printf("%d ",a);
		a=a+3;
	}
	return 0;
}