#include<iostream>
using namespace std;
void printArray(int[],int);
void bubbleSort(int[],int);
int main(){
	cout<<"Implementation of bubble sort...\n";	
	cout<<"----------------------------------\n";
	int arr[] = {2,5,1,7,3};
	cout<<"Array Elements Before Sorting: ";
	printArray(arr,5);
	bubbleSort(arr,5);
	cout<<"Array Elements After Sorting: ";
	printArray(arr,5);
	return 0;
}
void bubbleSort(int arr[],int n){
	bool isSwap = false;
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j],arr[j+1]);
				isSwap = true;
			}
		}
		if(!isSwap){
			return;
		}
	}
}
void printArray(int arr[],int n){
	for(int i=0; i<n; i++)
		cout<<arr[i]<<"  ";
	cout<<endl;	
}
