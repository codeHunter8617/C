#include<stdio.h>
int main(){
	int n;
	printf("enter no of rows:\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int a=1; //no of rows->i
		for(int j=1;j<=i;j++){ //no of columns->j
			printf("%d ",a);
			a=a+2;
		}
	printf("\n");
	}
	return 0;

}