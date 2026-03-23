#include<iostream>
using namespace std;
class CircularQueue{
	int* arr;
	int cs,cap,f,r;
	public:
		CircularQueue(int size){
			cap = size;
			arr = new int[cap];
			f = 0; r = -1; cs = 0; 
		}
		bool empty(){
			return cs == 0;
		}
		void push(int data){
			if(cs == cap){
				cout<<"Circular Queue is Full...\n";
				return;
			}
			r = (r+1)%cap;
			arr[r] = data;
			cs++;
		}
		void pop(){
			if(empty()){
				cout<<"Queue is Empty...\n";
				return;
			}
			f = (f+1)%cap;
			cs--;
		}
		int front(){
			return arr[f];
		}
		void printArr(){
			for(int i=0; i<cap; i++){
				cout<<arr[i]<<"  ";
			}
			cout<<endl;
		}
};
int main(){
	CircularQueue cq(3);
	cq.push(10);
	cq.push(20);
	cq.push(30);
	cout<<"Circular Queue Implementation using array...\n";
	cout<<"After last push in the Circular Queue...\n";
	cq.printArr();
	cq.push(40);
	cq.pop();
	cq.push(40);
	cout<<"After pop and then push in the Circular Queue...\n";
	cq.printArr();
	cout<<"Printing like the Queue which actually looks like a queue...\n";
	while(!cq.empty()){
		cout<<cq.front()<<"  ";
		cq.pop();
	}
	return 0;
}
