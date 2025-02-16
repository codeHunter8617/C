#include<stdio.h>
int main(){
	typedef struct student{
		int roll;
		float percent;
		char grade;
	}student;
	student arr[3];
	arr[0].grade='A';
	arr[0].roll=31;
	arr[0].percent=98.5;
    student s={14,63.3,'B'};
	arr[1]=s;

	printf("%d ",arr[1].roll);
	printf("%c ",arr[1].grade);
	printf("%f ",arr[1].percent);
	return 0;
	
}