#include<iostream>
#include<queue>
using namespace std;
int main(){
	cout<<"C++ STL Priority Queue practice program...\n";
	cout<<"------------------------------------------\n";
	priority_queue<int> pq;
	pq.push(5);
	pq.push(10);
	pq.push(3);
	pq.push(4);
	cout<<"Queue Elements before poping: ";
	while(!pq.empty()){
		cout<<pq.top()<<"  ";
		pq.pop();
	}
	cout<<"\nSize of the queue after poping: "<<pq.size();
	return 0;
}
