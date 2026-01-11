#include<iostream>
#include<deque>
using namespace std;
int main(){
	deque<int> d;
	for(int i=1; i<=10; i++)	
		d.push_back(i*2);
//		d.push_front(i*2);
	cout<<"C++ STL Deque Practice Program...\n";
	cout<<"-----------------------------------\n";
	cout<<"Deque before Poping some elements: ";
	for(int i=0; i<d.size(); i++)
		cout<<d[i]<<"  ";
	d.pop_front();
	d.pop_back();
	cout<<"\nDeque After Poping some elements: ";
	for(int i=0; i<d.size(); i++)
		cout<<d[i]<<"  ";
	cout<<endl;			
	return 0;
}
