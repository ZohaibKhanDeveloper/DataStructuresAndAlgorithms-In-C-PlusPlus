#include<iostream>
using namespace std;
bool isValid(int[],int,int,int);
int allocateBooks(int[],int,int);
int main(){
	int arr[] = {2,1,3,4};
	cout<<"Simple Program that allocates books to the students...\n";
	cout<<"------------------------------------------------------\n";
	cout<<"Calling with 2 Students for book allocation: "<<allocateBooks(arr,4,2)<<endl;
	cout<<"Calling with 3 Students for book allocation: "<<allocateBooks(arr,4,3)<<endl;
	cout<<"Calling with 5 Students for book allocation: "<<allocateBooks(arr,4,5)<<endl;
	return 0;
}
int allocateBooks(int arr[],int n,int m){
	if(m>n){
		return -1;
	}
	int sum = 0;
	for(int i=0; i<n; i++)
		sum += arr[i];
	int st = 0, end = sum, ans = -1;
	while(st<=end){
		int mid = st + (end -st) / 2;
		if(isValid(arr,n,m,mid)){
			end = mid - 1;
			ans = mid;
		}
		else{
			st = mid + 1;
		}
	}		
	return ans;
}
bool isValid(int arr[],int n,int m,int maps){
	int stu = 1, pages = 0;
	for(int i=0; i<n; i++){
		if(arr[i]>maps){
			return false;
		}
		if(pages+arr[i]<=maps){
			pages += arr[i];
		}
		else{
			stu++;
			pages = arr[i];
		}
	}
	return stu > m ? false : true;
}
