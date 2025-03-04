#include<iostream>
using namespace std;
int main(){
	cout<<"--BITWISE OPERATORS PRACTICE--"<<endl;
	int num1,num2,numOfShift;
	cout<<"Enter first number to apply bitwise operators : ";
	cin>>num1;
	cout<<"Now Enter second number to apply bitwise operators : ";
	cin>>num2;
	cout<<"Bitwise & : "<<(num1 & num2)<<endl;
	cout<<"Bitwise | : "<<(num1 | num2)<<endl;
	cout<<"Bitwise ^ : "<<(num1 ^ num2)<<endl;
	cout<<"Now Enter the number of shifting : ";
	cin>>numOfShift;
	cout<<numOfShift<<" Left Shift(s) "<<num1<<" is "<<(num1 << numOfShift)<<endl;
	cout<<numOfShift<<" Right Shift(s) "<<num1<<" is "<<(num1 >> numOfShift)<<endl;
	cout<<numOfShift<<" Left Shift(s) "<<num2<<" is "<<(num2 << numOfShift)<<endl;
	cout<<numOfShift<<" Right Shift(s) "<<num2<<" is "<<(num2 >> numOfShift)<<endl;
	return 0;
}
