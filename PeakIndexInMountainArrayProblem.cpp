#include<iostream>
using namespace std;
int searchPeak(int[],int);
int main(){
	int A[]={0,3,8,9,5,2};
	int peak = searchPeak(A,6);
	cout<<"Finding Peak index in mountain array...\n";
	cout<<"----------------------------------------\n";
	cout<<"Peak Index in Moutain array is: "<<peak<<endl;
	return 0;
}
int searchPeak(int A[],int len){
	int st = 1, end = len - 2;
	while(st<=end){
		int mid = st + (end - st) / 2;
		if(A[mid-1]<A[mid] && A[mid] > A[mid+1])
			return mid;
		else if(A[mid-1]<A[mid])
			st = mid+1;
		else
			end = mid-1;			
	}
}
