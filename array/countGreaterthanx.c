#include<stdio.h>
int main(){
	int arr[]={3,6,4,66};
	int n=sizeof(arr)/4;
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	int x=10;
	int count =0;
	for(int i=0;i<n;i++){
		if(arr[i]>x) count++;
	}
	printf("%d",count);
}