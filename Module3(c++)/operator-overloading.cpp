#include<iostream>
using namespace std;
class Maths{
	public:
		int a,b;
		Maths(int x=0,int y=0){//default value of x and y =0
			a=x;
			b=y;
		}
		Maths operator +(const Maths &m2){
			Maths m3;
			m3.a=a+m2.a;
			m3.b=b+m2.b;
			return m3;
		}
		void display(){
			cout<<"\n a="<<a<<"\t b="<<b;
		}
};
main(){
	Maths m1(1,2);
	m1.display();
	Maths m2(3,4);
	m2.display();
	Maths m3 = m1+m2;
	m3.display();
	Maths m4(1,1);
	m4.display();
	Maths m5=m3+m4;
	m5.display();
}
