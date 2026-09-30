#include<iostream>
using namespace std;
class Account{
	public:
		int accno;
		char accholder[20];
		float balance;
		void getAccountInfo(){
			cout<<"\n Enter account number and holdername and balance:";
			cin>>accno>>accholder>>balance;
		}
};
class Saving: public Account{
	public:
		void calculateBal(){
			balance= balance + (balance*0.1);
		}
		void pintSlip(){
			cout<<"\n account number:"<<accno;
			cout<<"\n account holder:"<<accholder;
			cout<<"\n balance:"<<balance;
		}
};
class Current: public Account{
	public:
		void calculateBal(){
			balance= balance - (balance*0.1);
		}
		void pintSlip(){
			cout<<"\n Your account type:Current";
			cout<<"\n account number:"<<accno;
			cout<<"\n account holder:"<<accholder;
			cout<<"\n balance:"<<balance;
		}
};
main(){
	int ch;
	cout<<"\n press 1 for saving account \npress 2 for current";
    cin>>ch;
	if(ch==1){
		Saving s1;
		s1.getAccountInfo();
		s1.calculateBal();
		s1.pintSlip();
	}	
	else if(ch==2){
		Current c1;
		c1.getAccountInfo();
		c1.calculateBal();
		c1.pintSlip();
	}
	else{
		cout<<"\n Invalid choice";
	}
}
