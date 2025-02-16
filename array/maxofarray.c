#include<stdio.h>
int main(){
	int arr[]={3,6,4,6,3,6,7,3,66};
	int n=sizeof(arr)/4;
	int mx=3;
	for(int i=0;i<n;i++){
		if(mx<arr[i]) mx=arr[i];
	}
	printf("%d",mx);
}