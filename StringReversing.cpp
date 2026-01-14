#include<iostream>
using namespace std;
int main(){
	cout<<"String or Character array reversing program...\n";
	cout<<"------------------------------------------------\n";
	string str = "Zohaib Khan";
	cout<<"String Before Reversing: "<<str;
	int st = 0, end = str.length() - 1;
	while(st<end){
		swap(str[st],str[end]);
		st++;
		end--;
	}
	cout<<"\nString after Reversing: "<<str;
	return 0;
}
