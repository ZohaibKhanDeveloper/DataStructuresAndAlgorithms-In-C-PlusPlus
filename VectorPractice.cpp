#include<iostream>
#include<vector>
using namespace std;
void reverseVector(vector <int> &vec,int size){
	int start = 0;
	int end = size-1;
	while(start<end){
		swap(vec.at(start),vec.at(end));
		start++;
		end--;
	}
}
int main(){
//	vector <int> vec(3,4);
	vector <int> vec;
	for(int i=1; i<=50; i++){
		vec.push_back(i);
	}
	
	cout<<"Vector Values after pushing 50 numbers: ";
	for(int i=0; i<50; i++){
		cout<<vec.at(i)<<"  ";
	}
	for(int i=0; i<25; i++){
		vec.pop_back();
	}
	cout<<"\nVector after poping 25 values: ";
	for(int i=0; i<25; i++){
		cout<<vec.at(i)<<"  ";
	}
	cout<<"\nFront Value of the vector is: "<<vec.front();
	cout<<"\nBack Value of the vector is: "<<vec.back();
	cout<<"\nSize of the Vector is: "<<vec.size();
	cout<<"\nCapacity of the vector is: "<<vec.capacity();
	reverseVector(vec,vec.size());
	cout<<"\nVector Values after Reversing: ";
	for(int i=0; i<vec.size(); i++){
		cout<<vec.at(i)<<"  ";
	}
	return 0;
}
