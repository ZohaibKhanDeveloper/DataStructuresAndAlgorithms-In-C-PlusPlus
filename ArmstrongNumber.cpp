#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int num,sum = 0, originalNum;
	cout<<"Enter a number to check it is ArmStrong number or not : ";
	cin>>num;
	originalNum = num;
	while(num > 0){
		int lastDigit = num % 10;
		sum += pow(lastDigit,3);
		num = num / 10;
	}
	if(sum == originalNum){
		cout<<"Number is Armstrong.\n";
	}
	else{
		cout<<"Number is not Armstrong.\n";
	}
	return 0;
}
