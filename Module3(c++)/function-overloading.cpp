#include<iostream>
using namespace std;
//Function-overloading
//same function perform diff task
//according to noof arguments and type of arguments
class Maths{
	public:
		void add(int a, int b){
			cout<<"\n addition of two int="<<a+b;
		}
		void add(float x,float y, float z){
			cout<<"\n addition of float="<<x+y+z;
		}
};
main(){
	Maths m1;
	m1.add(1.2,3.4,5.6);
	m1.add(2,3);
}
