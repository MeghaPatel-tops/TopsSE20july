#include<iostream>
#include<fstream>
using namespace std;
main(){
	char data[100];
//	ofstream of;
//	of.open("hello.txt",ios::out);
//	of<<"hello wolrd";
//	of.close();
 
    ifstream readF;
    readF.open("hello.txt",ios::in);
//    readF>>data;
	 readF.getline(data,12);
    cout<<"\n redaing data fro  file="<<data;
    readF.close();
}
