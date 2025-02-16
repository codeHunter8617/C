#include<stdio.h>
int main(){
	int a=5;
	int* x=&a;
	int** y=&x; // int* -> int ka address store karta hai
	// VVIP -> *X=7; // a is changed
	printf("%p\n",x); // %p se address print hota hai
	printf("%p\n",&x);
	printf("%d\n",*x);
	printf("%d\n",a);
	printf("%p\n",*y);
	printf("%d",**y);

	return 0;

}