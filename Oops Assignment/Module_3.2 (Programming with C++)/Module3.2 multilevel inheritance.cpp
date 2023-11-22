#include<iostream>
using namespace std;
class student{
	int rollno;
	public:
		void setRollNo(int roll)
		{
			rollno=roll;
		}
		int getRollNo() const{
			return rollno;
		}
};
class test:public student{
	int sub1Marks,sub2Marks;
	public:
		void setTestMarks(int marks1,int marks2)
		{
			sub1Marks=marks1;
			sub2Marks=marks2;
		}
		int getSub1Marks() const
		{
			return sub1Marks;
		}
		int getSub2Marks() const
		{
			return sub2Marks;
		}
};
class result:public test{
	int calculatetotalmarks() const
	{
		return getSub1Marks()+ getSub2Marks();
	}
	public:
	void displayResult()const
	{
		cout<<"Roll Number:"<<getRollNo()<<endl;
		cout<<"Subject 1 Marks:"<<getSub1Marks()<<endl;
		cout<<"Subject 2 Marks:"<<getSub2Marks()<<endl;
		cout<<"Total Marks:"<<calculatetotalmarks()<<endl;
	}
};
int main()
{
	result r1;
	r1.setRollNo(101);
	r1.setTestMarks(85,95);
	cout<<"Student Result:"<<endl;
	r1.displayResult();
	return 0;
}
