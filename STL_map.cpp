#include<iostream>
#include<map>
using namespace std;

int main(){
	
	map<int,string> customer;
	
	customer[1] = "John Doe";
	customer[2] = "Jay";
	customer[3] = "Kanta Ben";
	
	map<int,string> c{
		{1,"John Doe"},
		{2,"Jay"},
		{3,"Kanta Ben"},
	};
	
	//cout<<customer[1]<<endl;
	//cout<<c[1]<<endl;
	
	map<int,string> ::iterator p =customer.begin();
	while(p != customer.end()){
		cout<<p->second<<endl;
		p++;
	}
	
	//cout<<customer.at(3);	
	
	customer.insert(pair<int,string>(4,"Mota Ben"));
	cout<<customer.at(4);
		
	return 0;
}
