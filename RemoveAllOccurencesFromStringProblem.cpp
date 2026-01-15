#include<iostream>
using namespace std;
string removeOccurences(string str,string part){
	while(str.length() > 0 && str.find(part) < str.length()){
		str.erase(str.find(part),part.length());
	}
	return str;
}
int main(){
	cout<<"C++ Program that remove all occurences of a string from another string...\n";
	cout<<"-------------------------------------------------------------------------\n";
	string str,part;
	cout<<"Enter a string: ";
	cin>>str;
	cout<<"Now Enter a part string u want to remove from the string: ";
	cin>>part;
	cout<<"String Before Cleaning: "<<str;
	str = removeOccurences(str,part);
	cout<<"\nCleaned String is: "<<str;
	return 0;
}
