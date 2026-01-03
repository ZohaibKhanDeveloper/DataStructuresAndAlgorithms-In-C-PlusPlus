#include<iostream>
using namespace std;
int singleNonDuplicate(int[],int);
int main(){
	cout<<"Finding Single Element in a sorted array...\n";
	cout<<"--------------------------------------------\n";
	int arr1[] = {1,1,2,3,3,4,4,8,8},arr2[] = {3,3,7,7,10,11,11};
	cout<<"Single Element in array 1 (case 1): "<<singleNonDuplicate(arr1,9);
	cout<<"\nSingle Element in array 2 (case 2): "<<singleNonDuplicate(arr2,7);
	return 0;
}
int singleNonDuplicate(int A[],int len){
	if(len==1)	
		return A[0];
	int st = 0, end = len-1;
	while(st<=end){
		int mid = st + (end-st) / 2;
		if(mid==0 && A[0]!=A[1]) 
			return A[mid];
		if(A[mid-1]!=A[mid] && A[mid]!=A[mid+1])
			return A[mid];
		if(mid%2==0){
			if(A[mid-1]==A[mid])
				end = mid-1;
			else
				st = mid + 1;
		}	
		else{
			if(A[mid-1]==A[mid])
				st = mid + 1;
			else
				end = mid-1;
				
		}			
	}
	return -1;
}
