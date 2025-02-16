#include<stdio.h>
typedef union student{
		int roll;
		float percent;
		char grade;
	}student;
	
int main(){
	student s={76,70.7,'B'};
	printf("%c\n",s.grade);
	printf("%d\n",s.roll);
	printf("%f\n",s.percent);
	

	return 0;
	
}