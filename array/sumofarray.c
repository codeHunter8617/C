#include<stdio.h>
int main(){
	int arr[]={3,6,4,6,3,6,7,3,66};
	int n=sizeof(arr)/4;
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
	}
	printf("%d",sum);
}