#include<iostream>
using namespace std;
void sortColors(int[],int);
void print(int[],int);
int main(){
	cout<<"\nSimple Program that sort colors red = 0, green = 1, blue = 2... (Optimized Approach 2)\n";
	cout<<"--------------------------------------------------------------------------------------\n";
	int colors[] = {0,2,1,0,1,1,0,2,1};
	cout<<"Colors Before Sorting: ";
	print(colors,9);
	sortColors(colors,9);
	cout<<"\nColors After Sorting: ";
	print(colors,9);
	return 0;
}
void sortColors(int arr[],int n){
	int low = 0, mid = 0, high = n-1;
	while(mid<=high){
		if(arr[mid] == 0){
			swap(arr[low],arr[mid]);
			low++;
			mid++;
		}
		else if(arr[mid] == 1){
			mid++;
		}
		else{
			swap(arr[high],arr[mid]);
			high--;
		}
	}
}
void print(int arr[],int n){
	for(int i=0; i<n; i++)
		cout<<arr[i]<<"  ";
}
