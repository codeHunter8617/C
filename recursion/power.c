#include<stdio.h>
int power(int a,int b){
	if(b==0) return 1;//base case
	return a*power(a,b-1);
	
}
int main(){
	int a;
	printf("enter base : ");
	scanf("%d",&a);
	int b;
	printf("enter power : ");
	scanf("%d",&b);
	printf("%d raised to power %d is %d\n",a,b,power(a,b));
	return 0;
}