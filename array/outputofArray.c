#include<stdio.h>
int main(){
	int arr[5];//declaration of an array//initialization 
	for(int i=0;i<=4;i++){//input
      scanf("%d",&arr[i]);
	}
	for(int i=0;i<=4;i++){//output
      printf("%d ",arr[i]);
	}
	return 0;
}