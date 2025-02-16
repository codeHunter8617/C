#include<stdio.h>
typedef struct student{
		int roll;
		float percent;
		char grade;
	}student;
	void change(student* p){
		// (*p).grade='A';
		p->grade='A';
		p->percent=99;
		p->roll=45;
	}

    // void change(int* x){
	// 	*x=8;
	// }
int main(){
	student s={76,70.7,'B'};
	printf("%c\n",s.grade);
	change(&s);
	printf("%c\n",s.grade);
	printf("%f\n",s.percent);
	printf("%d\n",s.roll);
	 
	//  int x=5;
	//  printf("%d\n",x);
	//  change(&x);
	//   printf("%d\n",x);

	return 0;
	
}