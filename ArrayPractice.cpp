#include<iostream>
using namespace std;
void smallestAndLargestInArray(int numbers[],int size){
	int smallest=numbers[0],largest=numbers[0];
	for(int i=1; i<size; i++){
		smallest = min(numbers[i],smallest);
		largest = max(numbers[i],largest);
	}
	cout<<"Largest Number in Array is: "<<largest;
	cout<<"\nSmallest Number in array is: "<<smallest;
}
int linearSearch(int numbers[],int size,int key){
	for(int i=0; i<size; i++){
		if(numbers[i]==key)
			return i;
	}	
	return -1;
}
void reverseArray(int numbers[],int size){
	int start = 0, end = size-1;
	while(start < end){
		swap(numbers[start],numbers[end]);
		start++;
		end--;
	}
}
void swapMinMaxInArray(int numbers[],int size){
	int smallest=numbers[0],largest=numbers[0];
	int smLoc,lgLoc=0;
	for(int i=0; i<size; i++){
		if(smallest>numbers[i]){
			smallest = numbers[i];
			smLoc = i;
		}
		if(largest<numbers[i]){
			largest = numbers[i];
			lgLoc = i;
		}
	}
	int temp = numbers[smLoc];
	numbers[smLoc] = numbers[lgLoc];
	numbers[lgLoc] = temp;
}
void printUniqueInArray(int numbers[],int size){
	int count;
	cout<<"\nUnique Elements in array : ";
	for(int i=0; i<size; i++){
		count = 0;
		for(int j=0; j<size; j++){
			if(numbers[i]==numbers[j])
				count++;
		}
		if(count<2)
			cout<<numbers[i]<<" ";
	}
	cout<<endl;
}
void intersectArrays(int a[],int b[],int sizeA,int sizeB){
	cout<<"\nIntersection of Arrays are : ";
	for(int i=0; i<sizeA; i++){
		for(int j=0; j<sizeB; j++){
			if(a[i]==b[j]){
				cout<<a[i]<<" ";
			}
		}
	}	
	cout<<endl;
}
int main(){
	int numbers[] = {2,4,6,8,10,12,14,16,18,20};
	int numbers2[] = {2,4,6,9,10};
	int redundantNums[] = {1,4,3,4,7,8,8,7,3,9,5,6,10};
	smallestAndLargestInArray(numbers,10);
	int location = linearSearch(numbers,10,20);
	if(location != -1)
		cout<<"\nKey Number found at location: "<<location<<endl;
	else
		cout<<"\nElement not found.\n";
	cout<<"Array Before Reversing...\n";
	for(int i=0; i<10; i++)
		cout<<" "<<numbers[i]<<"  ";
	cout<<"\nArray After Reversing...\n";		
	reverseArray(numbers,10);
	for(int i=0; i<10; i++)
		cout<<" "<<numbers[i]<<"  ";
	swapMinMaxInArray(numbers,10);
	cout<<"\nArray After Swapping Minimum and Maximum number in array : ";
	for(int i=0; i<10; i++)
		cout<<" "<<numbers[i]<<"  ";
	printUniqueInArray(redundantNums,13);
	intersectArrays(numbers,numbers2,10,5);
	return 0;
}
