#include<iostream>
#include<string>
using namespace std;

class student{
	private:
		string name;
		int age;
		
	public:
		void setName(string s,int a){
			name =s;
			age= a;
		}
		
		void getName(){
			cout<<"Name = "<<name<<endl;
			cout<<"Age = "<<age<<endl;
		}	
};

int main(){
	pair<string,int>p1;
	pair<string,string>p2;
	pair<int, student>p3;
	
	p1 = make_pair("Ketan", 20);
	p2 = make_pair("M.P.", "Indore");
	student s;
	s.setName("Ronaldo", 35);
	p3 = make_pair(7,s);

	cout<<"Pair 1:"<<endl;
	cout<<p1.first<<" "<<p1.second<<endl;

	cout<<"Pair 2:"<<endl;
	cout<<p2.first<<" "<<p2.second<<endl;

	cout<<"Pair 3:"<<endl;
	cout<<p3.first<<" ";
	student s2 = p3.second;
	s2.getName();

}
