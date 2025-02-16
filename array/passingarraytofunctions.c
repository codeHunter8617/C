#include<stdio.h>
void change(int x[5],int n){
	printf("%d\n",n);
	x[2]=90;

}
int main(){
	int arr[5]={3,5,6,7,4};
	int n=sizeof(arr)/4;
	printf("%d\n",n);
	printf("%d\n",arr[2]);
	change(arr,n);
	printf("%d\n",arr[2]);

}

