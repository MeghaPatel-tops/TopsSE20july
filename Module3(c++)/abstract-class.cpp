#include<iostream>
using namespace std;
class Area{
	public:
		virtual void findArea()=0;
};
class Circle: public Area{
	public:
		void findArea(){
			int r;
			cout<<"\n enter radius";
			cin>>r;
			cout<<"\n area of circle="<<(3.14*r*r);
		}
};
class Rect :public Area{
	 public :
	 	void findArea(){
	 		int l,b;
	 		cout<<"\n enter l and b";
	 		cin>>l>>b;
	 		cout<<"\n area of rect="<<l*b;
		 }
};
main(){
	Circle c1;
	c1.findArea();
	Rect r1;
	r1.findArea();
}

