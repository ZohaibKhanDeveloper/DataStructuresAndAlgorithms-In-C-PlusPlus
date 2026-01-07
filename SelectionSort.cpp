#include<iostream>
using namespace std;
void printArray(int[],int);
void selectionSort(int[],int);
int main(){
	cout<<"Implementation of Selection Sort...\n";	
	cout<<"----------------------------------\n";
	int arr[] = {2,5,1,7,3};
	cout<<"Array Elements Before Sorting: ";
	printArray(arr,5);
	selectionSort(arr,5);
	cout<<"Array Elements After Sorting: ";
	printArray(arr,5);
	return 0;
}
void selectionSort(int arr[],int n){
	for(int i=0; i<n-1; i++){
		int smallestIndex = i;
		for(int j=i+1; j<n; j++){
			if(arr[j] < arr[smallestIndex]){
				smallestIndex = j;
			}
		}
		swap(arr[i],arr[smallestIndex]);
	}
}
void printArray(int arr[],int n){
	for(int i=0; i<n; i++)
		cout<<arr[i]<<"  ";
	cout<<endl;	
}
