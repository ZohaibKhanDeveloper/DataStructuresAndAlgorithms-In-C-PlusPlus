#include<iostream>
using namespace std;
int main(){
	int height[9] = {1,8,6,2,5,4,8,3,7};
	int maxWater = 0;
	for(int i=0; i<9; i++){
		for(int j=i+1; j<9; j++){
			int w = j-i;
			int ht = min(height[i],height[j]);
			int currWater = w*ht;
			maxWater = max(maxWater,currWater);
		}
	}
	cout<<"This is Simple Solution to Container with Most Water Problem...\n";
	cout<<"---------------------------------------------------------------\n";
	cout<<"Max Water: "<<maxWater;
	return 0;
}
