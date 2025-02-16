#include<stdio.h>
int main(){
	int arr[]= {1,2,3,4,5,6,4,1,2,3,5,48,4,5,45};//declaration of an array//initialization 
	int n= sizeof(arr)/sizeof(arr[0]);
	printf("%d\n",n);
	printf("%d",sizeof(arr));
	return 0;
}