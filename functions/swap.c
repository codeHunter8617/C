#include<stdio.h>
int main(){
	int a;
	printf("enter a: ");
	scanf("%d",&a);
	int b;
	printf("enter b: ");
	scanf("%d",&b);
	int temp=a;
	a=b;
	b=temp;
	printf("the value of a & b after swaping is %d %d",a,b);
	return 0;

}