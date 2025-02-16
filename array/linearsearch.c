#include<stdio.h>
#include<stdbool.h>
int main(){
	int arr[]={3,6,4,66};
	int n=sizeof(arr)/4;
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	int x=66;
	bool flag =false;
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			flag=true;
			break;
		}
	}
	if(flag==true) printf("%d exists",x);
	else printf("does not exist");
}