#include<stdio.h>
int main(){
	char str[]="Madhusudan";
	printf("%c\n",str[0]);
	printf("%d\n",str[0]);
	str[0]='S';
	printf("%s",str);
	
	return 0;
}