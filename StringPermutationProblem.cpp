#include<iostream>
using namespace std;
bool isFreqSame(int f1[],int f2[]){
	for(int i=0; i<26; i++){
		if(f1[i] != f2[i]){
			return false;
		}
	}
	return true;
}
bool checkInclusion(string s1,string s2){
	int freq[26] = {0};
	for(int i=0; i<s1.length(); i++){
		freq[s1[i]-'a']++;
	}
	int windSize = s1.length();
	for(int i=0; i<s2.length(); i++){
		int windIdx = 0, idx = i;
		int windFreq[26] = {0};
		while(windIdx < windSize && idx < s2.length()){
			windFreq[s2[idx]-'a']++;
			windIdx++; idx++;
		}
		if(isFreqSame(freq,windFreq)){
			return true;
		}
	}
	return false;
}
int main(){
	cout<<"Finding Permutation of a string in another string...\n";
	cout<<"----------------------------------------------------\n";
	string s1="ab",s2="eidbaooo";
	if(checkInclusion(s1,s2)){
		cout<<"Permutation of the string exists in string 2...\n";
	}
	else{
		cout<<"Permutation of the string does not exist in string 2...\n";
	}
	return 0;
}
