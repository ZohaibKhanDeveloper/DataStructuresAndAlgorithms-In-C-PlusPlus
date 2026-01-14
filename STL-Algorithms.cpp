#include<iostream>
#include<vector>
using namespace std;
bool comparator(pair<int,int> p1,pair<int,int> p2){
	if(p1.second < p2.second)
		return true;
	if(p1.second > p2.second)
		return false;
	if(p1.first < p2.first)
		return true;
	else
		return false;	
}
int main(){
	cout<<"C++ STL builtin algorithms implementation usage...\n";
	cout<<"----------------------------------------------------\n";
	int arr[] = {1,2,5,0,9,6,10,12,11,7};
	cout<<"Array elements before sorting: ";
	for(int i=0; i<10; i++)
		cout<<arr[i]<<"  ";
	cout<<"Next Permutation of array: "<<next_permutation(arr,arr+10);	
	cout<<"Minimum of array: "<<min_element(arr,arr+10);
	cout<<"Maximum of array: "<<max_element(arr,arr+10);
	cout<<"Binary Search in array: "<<binary_search(arr,arr+10,2);	
	sort(arr,arr+10);
	cout<<"\nArray elements after sorting: ";
	for(int i=0; i<10; i++)
		cout<<arr[i]<<"  ";	
	sort(arr,arr+10,greater<int>());
	cout<<"\nArray elements after descending sorting: ";
	for(int i=0; i<10; i++)
		cout<<arr[i]<<"  ";	
	vector<int> v1;
	v1.push_back(2);	
	v1.push_back(5);
	v1.push_back(3);
	v1.push_back(1);
	v1.push_back(4);
	vector<int>::iterator itr;
	cout<<"\nVector Elements before sorting: ";
	for(itr=v1.begin(); itr!=v1.end(); itr++)
		cout<<*itr<<"  ";
	sort(v1.begin(),v1.end());		
	cout<<"\nVector Elements after sorting: ";
	vector<int>::iterator itr2;
	for(itr2=v1.begin(); itr2!=v1.end(); itr2++)
		cout<<*itr2<<"  ";
	vector<pair<int,int> > pv;
	for(int i=1; i<=5; i++){
		pv.push_back({i,i*2});
	}
	cout<<"\nPair vector elements before sorting: ";
	for(auto val:pv){
		cout<<val.first<<" "<<val.second<<endl;
	}
	sort(pv.begin(),pv.end());
	cout<<"\nPair vector elements after sorting: ";
	for(auto val:pv){
		cout<<val.first<<" "<<val.second<<endl;
	}
	sort(pv.begin(),pv.end(),comparator);
	cout<<"\nPair vector elements after sorting: ";
	for(auto val:pv){
		cout<<val.first<<" "<<val.second<<endl;
	}
	int n = 15;
	long int n2 = 135;
	long long int n3 = 1350;
	cout<<"\nSet Bits Count of 15: "<<__builtin_popcount(n);
	cout<<"\nSet Bits Count (long int) of 135: "<<__builtin_popcountl(n2);
	cout<<"\nSet Bits Count (long long int) of 15: "<<__builtin_popcountll(n3);
	return 0;
}
