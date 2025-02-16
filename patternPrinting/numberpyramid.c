#include<stdio.h>
int main(){
	int n;
	printf("enter no of lines:\n");
	scanf("%d",&n);
	int nst=1;
	// int nsp=n-1;
	for(int i=1;i<=n;i++){ //no of rows->i
		for(int j=1;j<=n-i;j++){  // n-i=nsp;
			printf(" ");
		}
		for(int j=1;j<=nst;j++){ 
			printf("%d",j);
		}
			nst=nst+2;

	printf("\n");
	}
	return 0;

}