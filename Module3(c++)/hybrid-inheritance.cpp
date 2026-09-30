#include<iostream>
using namespace std;
class M{
	public:
		int m;
		void getM(){
			cout<<"\n enter m";
			cin>>m;
		}
};
class A:virtual public M{
	public:
		int a;
		void getA(){
			cout<<"\n enter a";
			cin>>a;
		}
};
class B:virtual public M{
	public:
		int b;
		void getB(){
			cout<<"\n Enter b";
			cin>>b;
		}
};
class C: public A,public B{
	public:
		int c;
		void getC(){
			cout<<"\n Enter c";
			cin>>c;
		}
		void add(){
			cout<<"\n addition ="<<a+b+c+m;
		}
};
main(){
	 C c1;
	 c1.getM();
	 c1.getA();
	 c1.getB();
	 c1.getC();
	 c1.add();
}
