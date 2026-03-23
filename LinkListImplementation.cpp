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
class List{
	Node* head;
	Node* tail;
	public:
		List(){
			head = tail = NULL;
		}
	void push_front(int val){
		Node* newNode = new Node(val);
		if(head == NULL){
			head = tail = newNode;
			return;
		}
		newNode->next = head;
		head = newNode;
	}	
	void push_back(int val){
		Node* newNode = new Node(val);
		if(head==NULL){
			head = tail = newNode;
		}
		else{
			tail->next = newNode;
			tail = newNode;
		}
	}
	void pop_front(){
		if(head==NULL){
			cout<<"Already empty list...\n";
			return;
		}
		Node* temp = head;
		head = head->next;
		temp->next = NULL;
		delete temp;
	}
	void pop_back(){
		if(head==NULL){
			cout<<"Already empty list...\n";
			return;
		}
		Node* temp = head;
		while(temp->next != tail){
			temp = temp->next;
		}
		temp->next = NULL;
		delete tail;
		tail = temp;
	}
	void insert(int val,int pos){
		if(pos<0){
			cout<<"Invalid Position...\n";
			return;
		}
		if(pos == 0){
			push_front(val);
			return;
		}
		Node* temp = head;
		for(int i=0; i<pos-1; i++){
			if(temp == NULL){
				cout<<"Invalid Position...\n";
				return;
			}
			temp = temp->next;
		}
		Node* newNode = new Node(val);
		newNode->next = temp->next;
		temp->next = newNode;
	}
	void printLL(string msg){
		Node* temp = head;
		cout<<msg<<": ";
		while(temp!=NULL){
			cout<<temp->data<<"  ";
			temp = temp->next;
		}
		cout<<endl;
	}
};
int main(){
	List l;
	for(int i=1; i<=5; i++)
		l.push_front(i);
	cout<<"Link list Implementation with their functions...\n";
	l.printLL("Link list after pushing values in front");
	for(int i=1; i<=5; i++)
		l.push_back(i*2);	
	l.printLL("Link list after pushing values in back");
	l.pop_front();
	l.pop_back();
	l.printLL("Link list after one pop back and one pop front");
	l.insert(20,1);
	l.printLL("Link list after inserting 20 at position 1");
	return 0;
}
