#include<iostream>
using namespace std;
int binaryToDecimal(int number){
	int decimal = 0, pow = 1, rem;
	while(number > 0){
		rem = number % 10;
		number = number / 10;
		decimal += (rem*pow);
		pow *= 2;		
	}
	return decimal;
}
int decimalToBinary(int number){
	int binary = 0, pow = 1, rem;
	while(number > 0){
		rem = number % 2;
		number = number / 2;
		binary += (rem*pow);
		pow *= 10;		
	}
	return binary;
}
int main(){
	int binNum,decNum=0;
	cout<<"--CONVERSION PROGRAM--"<<endl;
	cout<<"Enter a decimal number to convert into binary : ";
	cin>>decNum;
	cout<<"Enter a binary number to convert into decimal : ";
	cin>>binNum;
	cout<<"Binary of "<<decNum<<" is : "<<decimalToBinary(decNum)<<endl;
	cout<<"Decimal of "<<binNum<<" is : "<<binaryToDecimal(binNum)<<endl;
	return 0;
}
