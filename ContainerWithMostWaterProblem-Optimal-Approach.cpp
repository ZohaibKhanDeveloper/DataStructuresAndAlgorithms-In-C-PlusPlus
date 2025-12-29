#include<iostream>
using namespace std;
int main(){
	int height[9] = {1,8,6,2,5,4,8,3,7};
	int maxWater = 0, lp = 0, rp = 8;
	while(lp<rp){
		int w = rp - lp;
		int ht = min(height[lp],height[rp]);
		int currWater = w*ht;
		maxWater = max(maxWater,currWater);
		height[lp] < height[rp] ? lp++ : rp--;
	}
	cout<<"This is Simple Solution to Container with Most Water Problem...\n";
	cout<<"---------------------------------------------------------------\n";
	cout<<"Max Water: "<<maxWater;
	return 0;
}
