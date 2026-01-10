#include<iostream>
#include<list>
using namespace std;
int main(){
	list<int> l;
	for(int i=1; i<=5; i++){
		l.push_back(i);
		l.push_front(i*2);
	}
//	for(int i=0; i<l.size(); i++){
//		cout<<l[i];
//	} // Not possible
	cout<<"C++ STL Lists Practice program...\n";
	cout<<"List Before Poping: ";
	list<int>::iterator itr;
	for(itr=l.begin(); itr!=l.end(); itr++){
		cout<<*(itr)<<"  ";
	}
	l.pop_back();
	l.pop_front();
	cout<<"\nList After Poping: ";
	list<int>::iterator itr2;
	for(itr2=l.begin(); itr2!=l.end(); itr2++){
		cout<<*(itr2)<<"  ";
	}
	return 0;
}
