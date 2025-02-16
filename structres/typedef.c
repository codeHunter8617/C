#include<stdio.h>
#include<string.h>
int main(){
	struct car{
		int price;
		float topspeed;
		char name[15];
	};
	struct car c1;//declaration
	c1.price=9600000;
	c1.topspeed=200.5;
	strcpy(c1.name,"buggati");
	printf("%d ",c1.price);
	printf("%f ",c1.topspeed);
	printf("%s\n ",c1.name);

	return 0;
	
}