#include<stdio.h>
int main(){
	int n;
	printf("enter no of rows:\n");
	scanf("%d",&n);
	for(int i=1;i<=5;i++){ //no of rows->i
		for(int j=1;j<=5;j++){
			int a=n/2 +1;
			if(j==3 || i==3) printf("*");
			else printf(" ");
		}
	printf("\n");
	}
	return 0;

}