#include<iostream>
using namespace std;
class bank_acc{
	
	int acc_no;
	int cur_bal;
	string name;
	public:
		void get(){
			cout<<"Enter name :";
			cin>>name;
			cout<<"\nEnter Account Number :";
			cin>>acc_no;
			cout<<endl;

		}
		void display(){
			cout<<"WelCome to State bank of India \n ";
			cout<<"\nAccount Holder Name is : ";
			cout<<name<<endl;
			cout<<"\nYour Account Number is: ";
			cout<<acc_no<<endl;
		}
};
int main()
{
	int choice,bal=1000,a,t1;
	
	string name;
	bank_acc b;
	b.get();
	b.display();
	        
	        
	        
	        cout<<"\nYour Current Balance is : "<<bal<<" INR"<<endl;
	
			cout<<"\nSelect\n\n 1 for Withdraw Money :\n 2 for deposit Money :\n ";
         	cin>>choice;
         	
        	switch(choice)
	{
		case 1:
			
				cout<<"Enter Amount :";
				cin>>a;
				t1=bal-a;  
	            
				if(t1<0){
					cout<<"Insuffiunt Balance";
				}
				else{
					cout<<"Thank you Withdraw Money \nYour Balance is : "<<t1<<" INR";
				 }
				
	            break;
	            
     	case 2:
			    cout<<"Enter Amount :";
				cin>>a;
				cout<<"Thank you Deposite Money \nYour Balance is : "<<bal+a<<" INR";
	            break;  
		}
		
			
			
	return 0;
}
