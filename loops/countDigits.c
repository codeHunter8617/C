#include<stdio.h>
int main(){ 
	int n;
	printf("enter a num :");
	scanf("%d",&n);
	int count=0;
	while(n!=0){
		n=n/10;
		count++;
	}
	printf("the number of digits are %d",count);
	return 0;
}