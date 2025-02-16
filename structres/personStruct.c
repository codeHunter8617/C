#include<stdio.h>
int main(){
	int x;//declaration
	x=5;//initialization
	typedef struct student{
		int roll;
		float percent;
		char grade;
	}student;
	student arr[3];
	arr[0].grade='A';
	arr[0].percent=95.4;
	arr[0].roll=31;
	student s={14,97.2,'B'};
	arr[1]=s;

	printf("%d ",arr[1].roll);
	printf("%c ",arr[1].grade);
	printf("%f\n",arr[1].percent);

	

	return 0;
	
}