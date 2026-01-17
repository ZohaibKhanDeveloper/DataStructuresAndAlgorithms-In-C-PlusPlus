#include<iostream>
using namespace std;
string reverse(string s){
	int st = 0, end = s.length()-1;
	while(st<end){
		swap(s[st],s[end]);
		st++;
		end--;
	}
	return s;
}
string reverseWords(string s){
	int n = s.length();
	string ans = "";
	s = reverse(s);
	for(int i=0; i<n; i++){
		string word = "";
		while(i<n && s[i]!=' '){
			word += s[i];
			i++;
		}
		word = reverse(word);
		if(word.length()>0){
			ans += " "+word;
		}
	}
	return ans.substr(1);
}
int main(){
	cout<<"Simple C++ Programt that reverse words in the given strings...\n";
	cout<<"--------------------------------------------------------------\n";
	string s = "This is a simple pen";
	cout<<"Actual String: "<<s;
	cout<<"\nReversed Words String: "<<reverseWords(s);
	return 0;
}
