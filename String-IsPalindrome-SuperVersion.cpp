#include<iostream>
using namespace std;
bool isAlphaNum(char c){
	if( (c>='0' && c<='9') || (tolower(c) >= 'a' && tolower(c) <= 'z')){
		return true;
	}
	return false;
}
bool isPalindrome(string str){
	int st = 0, end = str.length() - 1;
	while(st < end){
		if(!isAlphaNum(str[st])){
			st++;
			continue;
		}
		if(!isAlphaNum(str[end])){
			end--;
			continue;
		}
		if(tolower(str[st]) != tolower(str[end])){
			return false;
		}
		st++;
		end--;
	}
	return true;
}
int main(){
	cout<<"C++ Program that validate strings as palindrome or not...\n";
	cout<<"---------------------------------------------------------\n";
	if(isPalindrome("ra&ce?cAr*")){
		cout<<"The String \"ra&ce?cAr*\" is a valid palindrome...\n";
	}
	else{
		cout<<"String is not a valid Palindrome...\n";
	}
	return 0;
}
