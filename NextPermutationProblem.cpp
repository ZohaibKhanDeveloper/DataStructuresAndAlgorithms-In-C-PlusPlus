#include<iostream>
using namespace std;
void nextPermutation(int[],int);
void print(int[],int);
int main(){
	cout<<"This is a simple program that find the next permutation of an array...\n";
	cout<<"------------------------------------------------------------------------\n";
	int a[] = {1,2,3,6,5,4};
	cout<<"Array before next permutation: ";
	print(a,6);
	nextPermutation(a,6);
	cout<<"\nArray after next permutation: ";
	print(a,6);
	nextPermutation(a,6);
	cout<<"\nArray after next permutation: ";
	print(a,6);
	return 0;
}
void nextPermutation(int a[],int n){
	int pivot = -1;
	for(int i=n-1; i>=0; i--){
		if(a[i] < a[i+1]){
			pivot = i;
			break;
		}
	}
	if(pivot==-1){
//		reverse(a[0],a[n-1]);
		return;
	}
	for(int i=n-1; i>pivot; i--){
		if(a[i] > a[pivot]){
			swap(a[i],a[pivot]);
			break;
		}
	}
	int i=pivot+1, j = n-1;
	while(i<=j){
		swap(a[i++],a[j--]);
	}
}
void print(int a[],int n){
	for(int i=0; i<n; i++)
		cout<<a[i]<<"  ";
}
