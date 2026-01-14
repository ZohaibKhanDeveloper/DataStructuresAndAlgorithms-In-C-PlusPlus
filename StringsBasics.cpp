#include<iostream>
using namespace std;
int main(){
	cout<<"Simple Program that gives implementation of strings and char-arrays...\n";
	cout<<"----------------------------------------------------------------------\n";
	char str[6] = {'a','b','c','d','e','\0'};
	cout<<"Simple character array output: "<<str;
	string str2 = "ZOHAIB KHAN", str3 = "zohaib khan";
	cout<<"\nString str2 output: "<<str2;
	cout<<"\nString str3 output: "<<str3;
	cout<<"\nstr2 > str3: "<<(str2 > str3);
	cout<<"\nstr2 < str3: "<<(str2 < str3);
	cout<<"\nstr2 == str3: "<<(str2 == str3);
	cout<<"\nPrinting the character array: ";
	for(int i=0; str[i]!='\0'; i++){
		cout<<str[i]<<"  ";
	}
	cout<<"\nLength of str2: "<<str2.length();
	cout<<"\nLength of str3: "<<str3.length();
	cout<<"\nReverse of str2: "<<reverse(str2.begin(),str2.end());
	return 0;
}
