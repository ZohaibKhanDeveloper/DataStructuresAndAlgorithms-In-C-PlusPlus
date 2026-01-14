#include<iostream>
using namespace std;
bool isPalindrome(string);
int main(){
	cout<<"String Problem (Checking Palindrome Words)...\n";
	cout<<"----------------------------------------------\n";
	string str;
	cout<<"Enter a String: ";
	cin>>str;
	if(isPalindrome(str)){
		cout<<"Entered String is a valid Palindrome...\n";
	}
	else{
		cout<<"Entered String is not a valid Palindrome...\n";
	}
	return 0;
}
bool isPalindrome(string str){
	string str2 = str;
	int st = 0, end = str2.length()-1;
	while(st<end){
		swap(str2[st],str2[end]);
		st++;
		end--;
	}
	if(str2==str){
		return true;
	}
	else{
		return false;
	}
}
