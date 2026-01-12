#include<iostream>
#include<queue>
using namespace std;
int main(){
	cout<<"C++ STL Queue (Just like stack but not a stack) practice program...\n";
	cout<<"-------------------------------------------------------------------\n";
	queue<int> q;
	for(int i=1; i<=10; i++)
		q.push(i);
	cout<<"Queue Elements printing from front before poping: ";
	while(!q.empty()){
		cout<<q.front()<<"  ";
		q.pop();
	}	
	return 0;
}
