#include<iostream>
using namespace std;
void sortColors(int[],int);
void print(int[],int);
int main(){
	cout<<"\nSimple Program that sort colors red = 0, green = 1, blue = 2... (Optimized Approach 1)\n";
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
	int counts0 = 0, counts1 = 0, counts2 = 0;
	for(int i=0; i<n; i++){
		if(arr[i] == 0)
			counts0++;
		else if(arr[i] == 1)
			counts1++;
		else
			counts2++;	
	}
	int index = 0;
	for(int i=0; i<counts0; i++){
		arr[index++] = 0;
	}
	for(int i=0; i<counts1; i++){
		arr[index++] = 1;
	}
	for(int i=0; i<counts2; i++){
		arr[index++] = 2;
	}
}
void print(int arr[],int n){
	for(int i=0; i<n; i++)
		cout<<arr[i]<<"  ";
}
