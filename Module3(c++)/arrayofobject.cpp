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
	Product p[3];
	int i;
	for(i=0;i<3;i++){
		p[i].getProduct();
	}
	for(i=0;i<3;i++){
			p[i].showProduct();
	}
}
