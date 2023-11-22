#include<iostream>
#include<string>
using namespace std;
class cricketer{
	protected:
	string name;int age;
	public:
		void inputcricketerdata()
		{
			cout<<"Enter cricketer name";
			cin>>name;
			cout<<"Enter age";
			cin>>age;
		}
};
class batsman:public cricketer{
	int totalruns;
	double averageruns;
	int bestperformance;
	public:
		void inputbatsmandata()
		{
			inputcricketerdata();
			cout<<"Enter total runs";
			cin>>totalruns;
			cout<<"Enter best performance";
			cin>>bestperformance;
			averageruns=totalruns/bestperformance;
		}
		void displaybatsmandata()
		{
			cout<<"batsman Name:"<< name<<endl;
			cout<<"batsman Age:"<<age<<endl;
			cout<<"Total runs:"<<totalruns<<endl;
			cout<<"Average runs:"<<averageruns<<endl;
			cout<<"Best performance:"<<bestperformance<<endl;
		}
		
};
int main()
{
	batsman b;
	b.inputbatsmandata();
	b.displaybatsmandata();
	return 0;
}
