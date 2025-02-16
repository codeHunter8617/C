#include<stdio.h>
int main(){ 
	int n;
	printf("enter a num :");
	scanf("%d",&n);
	// SCOPE of variavle
	for(int i=1;i<=n;i++){
		printf("hello world\n");
	}
	return 0;
}