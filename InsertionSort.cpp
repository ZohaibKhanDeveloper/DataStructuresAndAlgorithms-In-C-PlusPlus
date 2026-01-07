#include<iostream>
using namespace std;
void printArray(int[],int);
void insertionSort(int[],int);
int main(){
	cout<<"Implementation of Insertion Sort...\n";	
	cout<<"----------------------------------\n";
	int arr[] = {2,5,1,7,3};
	cout<<"Array Elements Before Sorting: ";
	printArray(arr,5);
	insertionSort(arr,5);
	cout<<"Array Elements After Sorting: ";
	printArray(arr,5);
	return 0;
}
void insertionSort(int arr[],int n){
	for(int i=1; i<n; i++){
		int curr = arr[i], prev = i - 1;
		while(prev >= 0 && arr[prev] > curr){
			arr[prev + 1] = arr[prev];
			prev--;
		}
		arr[prev + 1] = curr;
	}
}
void printArray(int arr[],int n){
	for(int i=0; i<n; i++)
		cout<<arr[i]<<"  ";
	cout<<endl;	
}
