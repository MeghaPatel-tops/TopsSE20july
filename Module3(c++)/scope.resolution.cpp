#include<iostream>
using namespace std;
int x=0;
class Test{
	 public:
	 	void display();
};
void Test::display(){
	std::cout<<"\n method create outside the class";
}
namespace A {
    namespace B {
        int m = 5;
    }
}
main(){
	int x=10;
	cout<<"\n global varible="<<::x;
	Test t1;
	t1.display();
	cout<<"\n namespace m value="<<A::B::m;
}
