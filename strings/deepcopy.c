#include<stdio.h>
#include<string.h>
int main(){
	char str[]= "madhusudan";
	char ptr[11];
	strcpy(ptr,str);
	printf("%s\n",str);
	printf("%s\n",ptr);
	str[0]='M';
	printf("%s\n",str);
	printf("%s\n",ptr);
}