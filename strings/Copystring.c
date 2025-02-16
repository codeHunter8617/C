#include<stdio.h>
int main(){
	char str[]= "madhusudan";
	char* ptr=str;//shallow copy
	printf("%s\n",str);
	printf("%s\n",ptr);

	str[0]='M';
	printf("%s\n",str);
	printf("%s\n",ptr);
}