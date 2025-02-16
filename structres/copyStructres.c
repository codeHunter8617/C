#include<stdio.h>
int main(){
	int x;//declaration
	x=5;//initialization
	typedef struct student{
		int roll;
		float percent;
		char grade;
	}student;
	student s1={14,97.2,'B'};
	student s2=s1; //deep copy
	printf("%d ",s1.roll);
	printf("%d ",s2.roll);
	s2.grade='A';
	printf("%c ",s1.grade);
	printf("%c   ",s2.grade);
	

	
	
	

	return 0;
	
}