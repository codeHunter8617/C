#include<stdio.h>
int main(){
	int arr[]={3,6,4};
	int n=sizeof(arr)/4;
	int product=1;
	for(int i=0;i<n;i++){
		product=product*arr[i];
	}
	printf("%d",product);
}