#include<stdio.h>
int main(){ 
	int n;
	printf("enter a num :");
	scanf("%d",&n);//1-2+3-4+5....
	 int sum=0;
	 for(int i=0;i<=n;i++){
		// sum=sum+i;
		if(i%2!=0) sum =sum+i;
		else sum =sum-i;
	 }
	 printf("the sum is %d",sum);
	return 0;
}