#include<stdio.h>
int main(){
	char str[11];
	// scanf("%s",str);// this has one issue
	gets(str);// it can input entire sentence
	// printf("%s",str);
	puts(str);
	
	return 0;
}