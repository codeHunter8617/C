#include<stdio.h>
int fib(int n){
	if(n==1 || n==2) return 1;//base case
	return fib(n-1)+ fib(n-2);
	
}
int main(){
	int n;
	printf("enter a number : ");
	scanf("%d",&n);
	printf("%d",fib(n));
	return 0;
}