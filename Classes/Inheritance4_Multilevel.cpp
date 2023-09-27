#include<iostream>
using namespace std;
class Student{
	protected:
		int roll_no;
	public:
		void set_roll_no(int r);
		void get_roll_no(void);
};
void Student::set_roll_no(int r){
	roll_no=r;
}
void Student::get_roll_no(){
	cout<<"The Roll no of the student="<<roll_no<<endl;
}

class Exam: public Student{
	protected:
		float math;
		float physics;
	public :
		void set_marks(float,float);
		void get_marks(void);
			
};

void Exam::set_marks(float m1,float p1){
	math=m1;
	physics=p1;
}
void Exam::get_marks(){
	cout<<"Marks of the Math="<<math<<endl;
	cout<<"Marks of the Physics="<<physics<<endl;
}

class Result: public Exam{
	float percentage;	
	protected:
	public:
		void display(){
		cout<<"Percentage of the subjects="<<(math+physics)/2<<endl;
		}
};
int main(){
Result Razi;
Razi.set_roll_no(99);
Razi.set_marks(44,40);
Razi.get_marks();
return 0;
}


 /*
    Notes: 
        If we are inheriting B from A and C from B:[ A--->B--->C ]
        1. A is the base class for B and B is the base class for C
        2. A-->B-->C is called Inheritance Path
*/
