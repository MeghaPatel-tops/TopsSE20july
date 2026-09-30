#include<iostream>
using namespace std;
class Parent{
	public:
		int m;
		Parent(){
			cout<<"\n parent class con.called";
		}
		Parent(int x){
			m=x;
			cout<<"\n parent class x="<<x;
		}
};
class Child: protected Parent{
	public:
		Child(){
			cout<<"\n child class con called";
		}
		Child(int y,int x):Parent(x){
			cout<<"\n child con y="<<y;
			cout<<"\n in child m="<<m;
		}
		
};
main(){
	Child c1;
	Child c2(12,23);
	//cout<<"\nm="<<c2.m;
}
