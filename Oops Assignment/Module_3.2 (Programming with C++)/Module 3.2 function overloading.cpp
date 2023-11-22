#include<iostream>
using namespace std;
int operation(int a, int b)
{
	return a+b;
}
int operation(int a,int b, int c)
{
	return a-b-c;
}
int operation(int a,int b, int c, int d)
{
	return a*b*c*d;
}
double operation(double a,int b)
{
	if(b==0){
		cout<<"Error: division by zero!"<<endl;
		return 0.0;
	}
	return a/b;
}
int main()
{
	int  intresult;
	double doubleresult;
	intresult= operation(5,3);
	cout<<"Addition :"<<intresult<<endl;
	intresult= operation(10,4,2);
	cout<<"Subtraction :"<<intresult<<endl;
	intresult= operation(2,3,4,5);
	cout<<"Multiplacation :"<<intresult<<endl;
	doubleresult= operation(10,2);
	cout<<"Division :"<<intresult<<endl;
	
	return 0;
}
