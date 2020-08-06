#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string s1;
	s1 = "Hello"; //  = is assignment operator here 
	string s2 = " World";
	string s3 = s1+s2; // here + is concatination op
	cout<<s3;
	
	string s4 = "Good";
	string s5 = "Bad";
	
	cout<<endl;
	
	if(s4==s5){
		cout<<"Match found";
	}else{
		cout<<"Match not found";
	}
	
	s1.replace(1,1,"E"); // replace func where Para 1 is index position, para 2 is lentgh of string and para 3 is desired string.
	cout<<endl<<s1<<endl;
	
	s3.replace(1,3,"Yo");
	cout<<endl<<s3<<endl;
	
	string s6 ="Awesome";
	int i = s6.find("some");  // find func finds the desired string and gives it index position at first occurance.
	cout<<"Index Pos = "<<i<<endl;
	
	int j = s6.rfind("Awe");  // rfind func will finds in reverse order.
	cout<<"Index Pos = "<<j<<endl;
	
	string st1 ="Blow";
	string st2 ="Glow";
	int k = st1.compare(st2);  // compare func will compare two given strings
	cout<<k;
	
	
	return 0;
}
