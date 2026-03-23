#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		Node(int val){
			data = val;
			next = NULL;
		}
};
class Queue{
	Node* head;
	Node* tail;
	public:
		Queue(){
			head = tail = NULL;
		}
		bool empty(){
			return head == NULL;
		}
		void push(int data){
			Node* newNode = new Node(data);
			if(empty()){
				head = tail = newNode;
			}
			else{
				tail->next = newNode;
				tail = newNode;
			}
		}
		void pop(){
			if(empty()){
				cout<<"Already empty...\n";
				return;
			}
			Node* temp = head;
			head = head->next;
			delete temp;
		}
		int front(){
			return head->data;
		}
};
int main(){
	cout<<"Queue Implementation using link list...\n";
	Queue q;
	q.push(10);
	q.push(20);
	q.push(30);
	while(!q.empty()){
		cout<<q.front()<<"  ";
		q.pop();
	}
	return 0;
}
