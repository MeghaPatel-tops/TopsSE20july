#include<iostream>
using namespace std;
class Maths{
	public:
		int x,y;
	
		Maths(int a, int b){
			x=a;
			y=b;
		}
	
		void display(){
			cout<<"\n x="<<x<<"\t y="<<y;
		}
};
main(){
	Maths *m1 = new Maths(12,67);
	m1->display();
}
