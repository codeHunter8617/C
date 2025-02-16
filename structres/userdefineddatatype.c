#include<stdio.h>
int main(){
	int x;//declaration
	x=5;//initialization
	struct student{
		int roll;
		float percent;
		char grade;
	};
	struct student sourav;//declaration
	sourav.grade='A';
	sourav.roll=88;
	sourav.percent=96.4;
	printf("%c ",sourav.grade);
	printf("%d ",sourav.roll);
	printf("%f\n ",sourav.percent);

	struct student madhu;//declaration
	madhu.grade='B';
	madhu.roll=8;
	madhu.percent=98.2;

	struct student baban={19,92.3,'O'};//declaration
	printf("%c ",baban.grade);
	printf("%d ",baban.roll);
	printf("%f\n ",baban.percent);

	return 0;
	
}