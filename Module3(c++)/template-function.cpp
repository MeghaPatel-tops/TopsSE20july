#include<iostream>
using namespace std;
template <typename T>
T  add(T a, T b){
	cout<<"\n addition of "<<a<<" and "<<b<<" = "<<a+b;
}
main(){
	add<int>(12,34);
	add<float>(1.3,4.5);
}
