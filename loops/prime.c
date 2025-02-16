#include<stdio.h>
int main(){
	int n;
	printf("enter a number :");
	scanf("%d",&n);
	int a=0;
	for(int i=2;i<=n-1;i++){
		if(n%i==0){
			a=1;
		}
	}
	if(n==1) printf("neither composite nor prime\n");
	else if(a==1) printf("composite\n");
	else printf("prime\n");
	return 0;
}