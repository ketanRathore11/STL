#include<iostream>
#include<string>
#include<list>
using namespace std;

int main(){

	list<string> l2{"Juventus", "Real Madrid","Man United"};

	list<int> l1{2,1,44,5,7,12,22,11,4,25};

	//l1.push_back(60);
	//l1.pop_back();
	cout<<"List"<<endl;
	list<int>::iterator p=l1.begin();
	while(p!=l1.end()){
		cout<<*p<<" ";
		p++;
	}
	
	cout<<"\n\nSorted List"<<endl;
	l1.sort();
	list<int>::iterator q=l1.begin();
	while(q!=l1.end()){
		cout<<*q<<" ";
		q++;
	}
	
	cout<<"\n\nReverse Sorted List"<<endl;
	l1.reverse();
	list<int>::iterator r=l1.begin();
	while(r!=l1.end()){
		cout<<*r<<" ";
		r++;
	}
		
	cout<<"\n\nTotal Size = "<<l1.size();
	
	cout<<"\n\nRemoved Element List"<<endl;
	l1.remove(25);
	list<int>::iterator s=l1.begin();
	while(s!=l1.end()){
		cout<<*s<<" ";
		s++;
	}
		
	cout<<"\n\nTotal Size = "<<l1.size();
	
	//l1.clear(); this func will clear the list
}
