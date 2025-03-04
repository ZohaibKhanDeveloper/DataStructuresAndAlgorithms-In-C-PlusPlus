#include<iostream>
using namespace std;
void subArrays(int numbers[],int size){
	cout<<"Sub arrays are: \n";
	for(int st=0; st<size; st++){
		for(int end=st; end<size; end++){
			for(int i=st; i<=end; i++){
				cout<<numbers[i];
			}
			cout<<" ";
		}
		cout<<endl;
	}
}
int maxSubArray(int numbers[],int size){
	int maxSum = INT_MIN;
	for(int st=0; st<size; st++){
		int crntSum = 0;
		for(int end=st; end<size; end++){
			crntSum += numbers[end];
			maxSum = max(crntSum,maxSum);
		}
	}
	return maxSum;
}
int kadanesMaxSubArray(int numbers[],int size){
	int maxSum = INT_MIN, crntSum = 0;
	for(int i=0; i<size; i++){
		crntSum += numbers[i];
		maxSum = max(crntSum,maxSum);
		if(crntSum<0)
			crntSum = 0;
	}
	return maxSum;
}
int main(){
	int numbers[]={1,2,-3,-4,5};
	subArrays(numbers,5);
	cout<<"\nMaximum sub array sum is (Without using any Algorithm): "<<maxSubArray(numbers,5);
	cout<<"\nMaximum sub array sum is (By Using Kadanes Algorithm): "<<kadanesMaxSubArray(numbers,5);
	return 0;
}
