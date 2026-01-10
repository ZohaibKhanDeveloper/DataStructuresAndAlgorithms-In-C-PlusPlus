#include<iostream>
using namespace std;
void print(int[],int);
void merge(int[],int,int[],int);
int main(){
	cout<<"Program that merge two sorted arrays...\n";
	cout<<"---------------------------------------\n";
	int a[] = {1,2,3,0,0,0}, b[]={2,5,6};
	cout<<"Arrays before merging...\n";
	cout<<"Array 1: ";
	print(a,6);
	cout<<"\nArray 2: ";
	print(b,3);
	merge(a,6,b,3);
	cout<<"\nArrays after merging...\n";
	cout<<"Array 1: ";
	print(a,6);
	cout<<"\nArray 2: ";
	print(b,3);
	return 0;
}
void merge(int a[],int m,int b[],int n){
	int idx = m+n-1, i=m-1, j=n-1;
	while(i>=0 && j>=0){
		if(a[i]>=b[j]){
			a[idx--] = a[i--];
		}
		else{
			a[idx--] = b[j--];
		}
	}
	while(j>=0){
		a[idx--] = b[j--];
	}
}
void print(int a[],int n){
	for(int i=0; i<n; i++)
		cout<<a[i]<<"  ";
}
