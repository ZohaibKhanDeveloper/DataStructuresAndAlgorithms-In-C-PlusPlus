#include<iostream>
using namespace std;
void changeA(int*);
void change2A(int &);
int main(){
	cout<<"--Pointers Practice--\n";
	int a = 10;
	int* ptr = &a;
	cout<<"Variable a: "<<a<<" Pointer address: "<<ptr;
	int** ptr2 = &ptr;
	cout<<"\nDouble Pointer: "<<ptr2<<"\nPointer 2 value: "<<*ptr2<<"\nPointer 2 Value derefrenced to last pointer: "<<**ptr2;	
	int *ptr3=NULL;
	cout<<"\nNull Pointer: "<<ptr3<<endl;	
	cout<<"Before Changing: "<<a<<endl;
	changeA(&a);
	cout<<"After Changing: "<<a<<endl;
	cout<<"Before Changing: "<<a<<endl;
	change2A(a);
	cout<<"After Changing: "<<a<<endl;
	int arr[5] = {1,2,3,4,5};
	cout<<"Array Address: "<<arr<<endl;
	cout<<"Array name value first index using derefrence operator: "<<*arr<<endl;
	cout<<"Array name value first index using derefrence operator +1: "<<*(arr+1)<<endl;	
	cout<<"Array name value first index using derefrence operator +2: "<<*(arr+2)<<endl;
	int* arrPtr = arr;
	cout<<"After *arrPtr = arr: "<<*arrPtr;
	arrPtr++;
	cout<<"\nAfter *arrPtr = arr: "<<*arrPtr;
	arrPtr++;
	cout<<"\nAfter *arrPtr = arr: "<<*arrPtr;
	int b = 20;
	//pointer for arithmetic
	int* pointer;
	pointer = &b;
	cout<<"\nPointer: "<<pointer<<" Pointer +1 : "<<pointer+1<<endl;
	cout<<"\nPointer: "<<pointer<<" Pointer -1 : "<<pointer-1<<endl;
	cout<<"Pointer 1 - Pointer 2: "<<ptr-pointer<<endl;
	cout<<"Pointer 1 < Pointer 2: "<<(ptr<pointer)<<endl;
	cout<<"Pointer 1 > Pointer 2: "<<(ptr>pointer)<<endl;
	cout<<"Pointer 1 != Pointer 2: "<<(ptr!=pointer)<<endl;
	cout<<"Pointer 1 == Pointer 2: "<<(ptr==pointer)<<endl;
	return 0;
}
void changeA(int* a){
	*a=20;
}
void change2A(int &a){
	a=40;
}
