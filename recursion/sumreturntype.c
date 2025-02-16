#include<stdio.h>
int sum(int n){
	// int s=0;
	// for(int i=0;i<=n;i++){
	// 	s += i;
	if(n==1) return 1;
  int recAns= n+sum(n-1);
	return recAns;
	
}
int main(){
	int n;
	printf("enter a number : ");
	scanf("%d",&n);
	printf("%d",sum(n));
	return 0;
}