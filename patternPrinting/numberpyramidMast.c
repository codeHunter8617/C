#include<stdio.h>
int main(){
	int n;
	printf("enter no of lines:\n");
	scanf("%d",&n);
	int nsp=n-1;
	for(int i=1;i<=n;i++){ 
		for(int q=1;q<=nsp;q++){
		printf(" ");
	}
	nsp--;
		int a=i-1;
		for(int j=1;j<=i;j++){ 
			printf("%d",j);
		}
		for(int k=1;k<=i-1;k++){ 
			printf("%d",a);
			a--;
		}
		printf("\n");
	}
	return 0;

}