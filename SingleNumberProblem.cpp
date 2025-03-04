#include<iostream>
using namespace std;
int findSingleNumber(int nums[],int size){
	int singleNumber=nums[0];
	for(int i=1; i<size; i++){
		singleNumber ^= nums[i];
	}
	return singleNumber;
}
int main(){
	int numbers[9]={1,2,2,1,3,4,4,5,3};
	cout<<"Single Number in array is: "<<findSingleNumber(numbers,9);
	return 0;
}
