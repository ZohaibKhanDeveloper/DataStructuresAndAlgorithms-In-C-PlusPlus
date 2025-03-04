#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int> &vec){
	for(int i=0; i<vec.size(); i++){
		int freq=0;
		for(int j=0; j<vec.size(); j++){
			if(vec.at(i)==vec.at(j)) freq++;
		}
		if(freq>vec.size()/2){
			return vec.at(i);
		}
	}
}
//int optimizedMajorityElement(vector<int> &vec){
//	int n = vec.size(),freq = 1, me = vec.at(0);
//	sort(vec.begin(),vec.end());
//	for(int i=1; i<n; i++){
//		if(vec.at(i)==vec.at(i-1)) freq++;
//		else{
//			freq = 1;
//			me = vec.at(i);
//		}
//		if(freq>n/2) return me;
//	}
//	return me;
//}
int mooresMajorityElement(vector<int> &vec){
	int freq=0,me=0;
	for(int i=0; i<vec.size(); i++){
		if(freq == 0) me = vec.at(i);
		if(me==vec.at(i)) freq++;
		else freq--;
	}
	return me;
}
int main(){
	vector<int> numbers(3,4);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	cout<<"Majority Element in the array/vector is: "<<majorityElement(numbers);
//	cout<<"\nMajority Element(Optimized Approach) in the array/vector is: "<<optimizedMajorityElement(numbers);
	cout<<"\nMajority Element(Using Moore's Algorithm) in the array/vector is: "<<mooresMajorityElement(numbers);
	return 0;
}
