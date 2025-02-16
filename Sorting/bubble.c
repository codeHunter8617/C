#include<stdio.h>
int main(){
	int n;
	printf("enter array size:");
	scanf("%d",&n);
	int a[n];
	printf("enter values in array:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=n;i>0;i--){
		for(int j=0;j<i-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("sorted results:\n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}