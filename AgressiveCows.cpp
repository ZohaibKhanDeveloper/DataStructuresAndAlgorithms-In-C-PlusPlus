#include<iostream>
using namespace std;
bool isPossible(int[],int,int,int);
int getDistance(int[],int,int);
int main(){
	cout<<"Aggressive Cows Problem (Getting distance in stalls)...";
	cout<<"\n-------------------------------------------------------\n";
	int arr[] = {1,2,4,8,9};
	cout<<"Getting Distance for 2 cows: "<<getDistance(arr,5,2);
	cout<<"\nGetting Distance for 3 cows: "<<getDistance(arr,5,3);
	cout<<"\nGetting Distance for 4 cows: "<<getDistance(arr,5,4);
	cout<<"\nGetting Distance for 5 cows: "<<getDistance(arr,5,5);
	return 0;
}
int getDistance(int arr[],int n,int c){
	int st = 1, end = arr[n-1] - arr[0], ans = -1;
	while(st<=end){
		int mid = st + (end - st) / 2;
		if(isPossible(arr,n,c,mid)){
			ans = mid;
			st = mid + 1;
		}
		else{
			end = mid - 1;
		}
	}
	return ans;
}
bool isPossible(int arr[],int n,int c,int minAllowedDistance){
	int cows = 1, lastStallPos = arr[0];
	for(int i=1; i<n; i++){
		if(arr[i] - lastStallPos >= minAllowedDistance){
			cows++;
			lastStallPos = arr[i];
		}
		if(cows == c){
			return true;
		}
	}
	return false;
}
