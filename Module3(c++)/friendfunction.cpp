#include<iostream>
using namespace std;
int x=0;
class Test{
	private :
		int m;
	public:
	   Test(int m){
	   	this->m=m;
	}	
	friend void display(Test );
	friend class Dost;
};
class Dost{
	 public:
	 	 void testFunction(Test t1){
	 	cout<<"\n private  inside diff class data m="<<t1.m;
		  }
};
void display(Test t1){
	cout<<"\n private data m="<<t1.m;
}

main(){
	Test m1(23);
	display(m1);
	Dost d1;
	d1.testFunction(m1);
}
