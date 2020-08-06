#include<iostream>
#include<array>

using namespace std;

int main(){

	array<int, 5>data_array = {2,4,7,11,10};

	cout<<data_array.at(2)<<endl; // fetch the data from its index no.

	//cout<<data_array[3]<<endl; // fetch the data from its index no.

	//cout<<data_array.front()<<endl; // return the first value of array

	//cout<<data_array.back()<<endl; // return the last value of array
	//cout<<endl;

	//data_array.fill(4);  // fill same value in array
	//for(int i=0;i<5;i++){
	//	cout<<data_array[i]<<endl;
	//}
	//cout<<endl;

	//cout<<"Size is "<<data_array.size();

	//array<int, 5>data_array1 = {2,4,7,11,10};
	//array<int, 5>data_array2 = {3,5,8,1,21};

	/*data_array1.swap(data_array2);
	for(int i=0;i<5;i++){
		cout<<data_array1[i]<<endl;     // swap the values of both arrays
	}
	cout<<endl;
	for(int i=0;i<5;i++){
		cout<<data_array2[i]<<endl;
	} */



}
