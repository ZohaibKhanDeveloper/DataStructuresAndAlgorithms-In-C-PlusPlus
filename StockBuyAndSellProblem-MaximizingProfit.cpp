#include<iostream>
using namespace std;
int main(){
	int prices[6] = {7,1,5,3,6,4};
	int mp = 0, bestBuy = prices[0];
	for(int i=1; i<6; i++){
		if(prices[i]>bestBuy){
			mp = max(mp,prices[i]-bestBuy);
		}
		bestBuy = min(bestBuy,prices[i]);
	}
	cout<<"Stock Buy and Sell problem. (Maximizing the Profit)...";
	cout<<"\n-----------------------------------------------------\n";
	cout<<"Best Buy: "<<bestBuy;
	cout<<"\nMaximum Profit: "<<mp;
	return 0;
}
