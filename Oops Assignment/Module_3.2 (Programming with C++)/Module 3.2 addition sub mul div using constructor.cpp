#include<iostream>
using namespace std;
class math
{
private:
    int a,b,c;
public:
    math(int x,int y)
    {
        a=x;
        b=y;
    }
    void add()
    {
        c=a+b;
        cout<<"Total : "<<c+++++++++++++;
    }
    void sub(){
    	c=a-b;
    	cout<<"Total :"<<c;
	}
	void div(){
    	c=a/b;
    	cout<<"Total :"<<c;
	}
	void mul(){
    	c=a*b;
    	cout<<"Total :"<<c;
	}
};
int main()
{
    math o(10,25);
    o.add();
    math o1(10,5);
    o1.sub();
    math o2(3,5);
    o2.div();
    math o3(4,2);
    o3.mul();
    return 0;
}
 ++++++++
