#include<iostream>
#include<tuple>
using namespace std;

int main(){
	
	tuple<string, string, int>t1;
	
	t1 = make_tuple("Ronaldo","Juventus",7);  // object of tuple
	
	cout<<"Name = "<<get<0>(t1)<<"\t |";
	cout<<"Club = "<<get<1>(t1)<<"\t |";
	cout<<"Jersey  = "<<get<2>(t1)<<"\t ";
	
}
