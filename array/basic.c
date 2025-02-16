#include<stdio.h>
int main(){
	int arr[5]= {1,2,3,4,5};//declaration of an array//initialization 
	printf("%d\n",arr[0]);
	printf("%d\n",arr[1]);
	printf("%d\n",arr[2]);
	printf("%d\n",arr[3]);
	printf("%d\n",arr[4]);
	arr[1]=10;
	printf("%d",arr[1]);
	return 0;
}