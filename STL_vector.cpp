#include<iostream>
#include<vector>
using namespace std;

int main(){

	vector<int> v1{10,20,30,40,50};     // first parameter is SIZE and second is values
	  /*for(int i=0;i<5;i++){
		cout<<v1[i]<<endl;
	}*/
	cout<<endl;
	/*
	vector<string> v2(3,"Hello");  // first parameter is SIZE and second is values
	cout<<v2[0]<<"\t";
	cout<<v2[1]<<"\t";
	cout<<v2[2]<<"\t";
	*/
	vector<int> v3;
	cout<<v3.capacity()<<endl;

	v3.push_back(10);
	cout<<v3.capacity()<<endl;

	v3.push_back(20);
	cout<<v3.capacity()<<endl;

	v3.push_back(30);
	cout<<v3.capacity()<<endl;
	v3.push_back(40);
	cout<<v3.capacity()<<endl<<endl;
	v3.pop_back();
	cout<<v3.capacity()<<endl;



}
