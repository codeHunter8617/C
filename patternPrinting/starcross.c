#include<stdio.h>
int main(){
	int n;
	printf("enter no of rows:\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){ //no of rows->i
		for(int j=1;j<=n;j++){ //no of columns->j
			if(i==j || i+j==n+1) printf("*");
			else printf(" ");
		}
	printf("\n");
	}
	return 0;

}