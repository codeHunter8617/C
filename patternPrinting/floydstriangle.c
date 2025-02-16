#include<stdio.h>
int main(){
	int n;
	printf("enter no of rows:\n");
	scanf("%d",&n);
	int a=1;
	for(int i=1;i<=n;i++){ //no of rows->i
		for(int j=1;j<=i;j++){ //no of columns->j
			printf("%d ",a);
			a++;
		}
	printf("\n");
	}
	return 0;

}