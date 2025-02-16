#include<stdio.h>
typedef struct student{
		int roll;
		float percent;
		char grade;
	}student;
	void print(student s){
		printf("%d ",s.roll);
	     printf("%f ",s.percent);
		 printf("%c ",s.grade);
	}
int main(){
	student s={76,70.7,'B'};
	print(s);
	return 0;
	
}