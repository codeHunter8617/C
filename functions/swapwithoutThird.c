#include<stdio.h>
void swap(int a,int b){
	 a=a+b;
	b=a-b;
	a=a-b;
	return;
}
int main(){
	int a;
	printf("enter a: ");
	scanf("%d",&a);
	int b;
	printf("enter b: ");
	scanf("%d",&b);
	swap(a,b);
	printf("the value of a & b after swaping is %d %d",a,b);
	return 0;

}