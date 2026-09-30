#include<iostream>
using namespace std;
template <typename T>
class Maths{
	public:
		T a,b;
		Maths(T a, T b){
			this->a=a;
			this->b=b;
		}
		T calc(){
			cout<<"\n add="<<a+b;
			
			cout<<"\n sub="<<a-b;
			cout<<"\n mul="<<a*b;
			cout<<"\n div="<<a/b;
		}
};
main(){
	Maths <int> m1(12,2);
	m1.calc();
	
	Maths <float>m2(12.4,2.2);
	m2.calc();
}
