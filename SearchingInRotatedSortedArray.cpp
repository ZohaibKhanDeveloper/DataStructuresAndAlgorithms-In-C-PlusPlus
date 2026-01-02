#include<iostream>
using namespace std;
int searchItem(int[],int,int);
int main(){
	cout<<"Searching in rotated sorted array\n";
	cout<<"----------------------------------\n";
	int arr[8] = {3,4,5,6,7,0,1,2};
	int loc = searchItem(arr,0,8);
	if(loc!=-1){
		cout<<"Element found at location : "<<loc<<endl;
	}
	else{
		cout<<"Element does not exists...\n";
	}
	return 0;
}
int searchItem(int arr[],int target,int len){
	int st = 0, end = len-1;
	while(st<=end){
		int mid = st + (end - st) / 2;
		if(arr[mid] == target){
			return mid;
		}	
		if(arr[st] <= arr[mid]){
			if(arr[st] <= target && target <=arr[mid]){
				end = mid - 1;
			}
			else{
				st = mid + 1;
			}
		}
		else{
			if(arr[mid] <= target && target <= arr[end]){
				st = mid + 1;
			}	
			else{
				end = mid - 1;
			}
		}
	}
	return -1;
}
