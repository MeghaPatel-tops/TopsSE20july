#include<iostream>
#include<fstream>
using namespace std;
main(){
	//ofstream writeFile;
	int pid,i;
	char pname[20];
	float price;
	char data[100];
//	writeFile.open("product.csv",ios::out);
//	for(i=1;i<=3;i++){
//		cout<<"\n enter pid pname price";
//		cin>>pid>>pname>>price;
//		writeFile<<pid<<","<<pname<<","<<price<<"\n";
//		
//	}
//	writeFile.close();
	
	ifstream readFile;
	readFile.open("product.csv");
	if(!readFile){
		cout<<"\n File not found";
	}
	else{
		while(readFile.getline(data,100)){
		    cout << data << "\n";
		}
	}
}
