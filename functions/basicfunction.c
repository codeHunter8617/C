#include<stdio.h>
void england(){
	printf("you are in england\n");//6
	return;//7
}
void australia(){
	printf("you are in australia\n");//4
	england();//5
	return;//8
}
void india(){
	printf("you are in india\n");//2
	australia();//3
	return;//9
}
int main(){
	india();//1
	return 0;//10
}