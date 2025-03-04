#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Finding a number that it is a power of 2 or not\n";
	cout<<"Enter a number to check : ";
	cin>>num;
	if(num == 0 || (num % 2) != 0){
		cout<<"Number is not in power of 2.\n";
	}
	else{
		int check = (num & (num-1));
		if( check == 0)
			cout<<"Number is in power of 2.\n";
		else
			cout<<"Number is not in power of 2.\n";
	}
	return 0;
}
