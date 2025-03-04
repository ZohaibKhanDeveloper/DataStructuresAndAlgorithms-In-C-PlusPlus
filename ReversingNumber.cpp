#include<iostream>
using namespace std;
int main(){
	int num,reverse=0,actualNum;
	cout<<"Enter a number to reverse that number : ";
	cin>>num;
	actualNum = num;
	while(num > 0){
		int lastDigit = num % 10;
		reverse = reverse * 10 + lastDigit;
		num /= 10;
	}
	cout<<"Reverse of "<<actualNum<<" is "<<reverse;
	return 0;
}
