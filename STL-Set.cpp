#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main(){
	cout<<"C++ STL Set practice Program...\n";
	cout<<"---------------------------------\n";
	set<int> s;
	for(int i=1; i<=10; i++)
		s.insert(i);
	s.begin()++;
	s.insert(2);	
	set<int>::iterator itr;
	cout<<"Set All Values: ";
	for(itr=s.begin(); itr!=s.end(); itr++)
		cout<<*itr<<"  ";	
	cout<<"\nSize of set is: "<<s.size();
	cout<<"\nUpper bound of set (with value 4) : "<<*(s.upper_bound(4));
	cout<<"\nLower bound of set (with value 4): "<<*(s.lower_bound(4));
	cout<<"\n------------Multi Set--------------\n";
	multiset<int> ms;
	for(int i=1; i<=5; i++){
		ms.insert(i);
		ms.insert(i);
	}		
	set<int>::iterator itr2;
	cout<<"Multi Set All Values: ";
	for(itr2=ms.begin(); itr2!=ms.end(); itr2++)
		cout<<*itr2<<"  ";
	cout<<"\nSize of Multi set is: "<<ms.size();
	cout<<"\nUpper bound of Multi set (with value 4) : "<<*(ms.upper_bound(4));
	cout<<"\nLower bound of Multi set (with value 4): "<<*(ms.lower_bound(4));
	cout<<"\n------------Unordered Set--------------\n";
	unordered_set<int> us;	
	for(int i=1; i<=10; i++)
		us.insert(i*3);
	cout<<"\nUnordered Set values: ";
	for(auto val:us){
		cout<<val<<"  ";
	}		
	return 0;
}
