#include<iostream>
using namespace std;
class Product{
	  public:
	 int pid;
	 char pname[20];
	 float price;
	 
	 void getProduct(){
	 	cout<<"\n Enter pid pname and price";
	 	cin>>pid>>pname>>price;
	 }
	 void showProduct(){
	 	cout<<"\n pid="<<pid;
	 	cout<<"\n pname="<<pname;
	 	cout<<"\n price="<<price;
	 }
	
};
main(){
	Product p1;
	p1.getProduct();
	p1.showProduct();
	
}
