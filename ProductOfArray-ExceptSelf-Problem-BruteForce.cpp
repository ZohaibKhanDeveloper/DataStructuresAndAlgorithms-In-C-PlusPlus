#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> nums; 
	for(int i=1; i<5; i++) nums.push_back(i);
	int n = nums.size();
	vector<int> ans(n,1);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i!=j){
				ans[i] *= nums[j];
			}
		}
	}
	cout<<"Array Product Except Self- Brute Force Approach";
	cout<<"\n----------------------------------------------\n";
	cout<<"Numbers: ";
	for(int i=0; i<n; i++) cout<<nums[i]<<" ";
	cout<<"\nProduct Except Self: ";
	for(int i=0; i<n; i++) cout<<ans[i]<<" ";
	return 0;
}
