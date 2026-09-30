#include<iostream>
using namespace std;
class Maths{
	 public:
	 	int m;
	 	static int s;
	 	Maths(int m){
	 		this->m=m;
		}
		void display(){
			cout<<"\n m="<<m;
		}
		static void staticMethod()
		{
			cout<<"\n static data="<<Maths::s;
		}
};
int Maths::s=100;
main(){
	Maths m1(3);
	m1.display();
	Maths m2(7);
	m2.display();
    Maths::staticMethod();
}
