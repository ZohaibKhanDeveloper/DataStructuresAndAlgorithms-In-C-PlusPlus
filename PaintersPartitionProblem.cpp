#include<iostream>
using namespace std;
int isPossible(int[],int,int,int);
int minTimeToPaint(int[],int,int);
int main(){
	cout<<"Simple Program that Calculate the minimum time to paint partitions...\n";
	cout<<"-----------------------------------------------------------------------\n";
	int arr[] = {40,30,20,10};
	cout<<"Painting Partitions in min time with 2 painters: "<<minTimeToPaint(arr,4,2)<<endl;
	cout<<"Painting Partitions in min time with 3 painters: "<<minTimeToPaint(arr,4,3)<<endl;	
	cout<<"Painting Partitions in min time with 5 painters: "<<minTimeToPaint(arr,4,5)<<endl;
	return 0;
}
int minTimeToPaint(int arr[],int n,int m){
	int sum = 0, maxValue = INT_MIN;
	for(int i=0; i<n; i++){
		sum += arr[i];
		maxValue = max(maxValue,arr[i]);
	}
	int st = maxValue, end = sum, ans = -1;
	while(st<=end){
		int mid = st + (end - st) / 2;
		if(isPossible(arr,n,m,mid)){
			ans = mid;
			end = mid - 1;
		}
		else{
			st = mid + 1;
		}
	}
	return ans;
}
int isPossible(int arr[],int n,int m,int maxAllowedTime){
	int painters = 1, time = 0;
	for(int i=0; i<n; i++){
		if(time+arr[i] <= maxAllowedTime){
			time += arr[i];
		}
		else{
			painters++;
			time = arr[i];
		}
	}
	return painters <= m ? true : false;
}
