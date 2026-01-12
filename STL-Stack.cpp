#include<iostream>
#include<stack>
using namespace std;
int main(){
	cout<<"C++ STL Stack (LIFO) practice program...\n";
	cout<<"-----------------------------------------\n";
	stack<int> s;
	for(int i=1; i<=5; i++)
		s.push(i);
	cout<<"Top of the Stack: "<<s.top();	
	cout<<"\nSize of the stack before poping items: "<<s.size();
	cout<<"\nPoping and printing stack items: ";
	while(!s.empty()){
		cout<<s.top()<<"  ";
		s.pop();		
	}
	cout<<"\nSize of the stack after poping all the elements: "<<s.size();
	stack<int> s2;
	for(int i=1; i<=5; i++)
		s2.push(i*2);
	stack<int> s3;
	cout<<"\nSize of the stack 2 before swaping with stack 3: "<<s2.size();
	cout<<"\nSize of stack 3 before swaping with stack 2: "<<s3.size();
	s3.swap(s2);		
	cout<<"\nSize of the stack 2 after swaping with stack 3: "<<s2.size();
	cout<<"\nSize of stack 3 after swaping with stack 2: "<<s3.size();
	return 0;
}
