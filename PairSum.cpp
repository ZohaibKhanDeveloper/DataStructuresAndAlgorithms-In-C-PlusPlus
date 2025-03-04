#include<iostream>
#include<vector>
using namespace std;
vector<int> pairSum(vector<int> &vec,int target){
	vector <int> targetIndices;
	for(int i=0; i<vec.size(); i++){
		for(int j=i+1; j<vec.size(); j++){
			if(vec.at(i)+vec.at(j)==target){
				targetIndices.push_back(i);
				targetIndices.push_back(j);
				return targetIndices;
			}
		}
	}
}
vector<int> pairSumUsing2ptrs(vector<int> &vec,int target){
	vector <int> targetIndices;
	int i=0,j=vec.size()-1,pairSum=0;
	while(i<j){
		pairSum = vec.at(i) + vec.at(j);
		if(pairSum>target)	j--;
		else if(pairSum<target) i++;
		else{
			targetIndices.push_back(i);
			targetIndices.push_back(j);
			return targetIndices;
		}
	}
}
int main(){
	vector <int> vec,targetIndices;
	cout<<"Pair Sum Program\n";
	cout<<"Vector: ";
	for(int i=1; i<=10; i++)
		vec.push_back(i*2);			
	for(int i=0; i<10; i++)
		cout<<"["<<i<<"]: "<<vec.at(i)<<"  ";	
	targetIndices = pairSum(vec,22);
	cout<<"\nTarget (22) is the sum of the numbers at indices(Using Brutte Force Approach) : ";
	for(int i=0; i<targetIndices.size(); i++)
		cout<<targetIndices.at(i)<<" ";
	cout<<"\nTarget (12) is the sum of the numbers at indices(Using 2 Pointers Approach) : ";
	targetIndices = pairSumUsing2ptrs(vec,12);
	for(int i=0; i<targetIndices.size(); i++)
		cout<<targetIndices.at(i)<<" ";		
	return 0;
}
