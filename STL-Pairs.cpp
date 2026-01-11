#include<iostream>
#include<vector>
using namespace std;
int main(){
	pair<int,int> p;
	p.first = 3;
	p.second = 5;
	cout<<"C++ STL Pair Practice program...\n";
	cout<<"----------------------------------\n";
	cout<<"Pair 1: {"<<p.first<<","<<p.second<<"}\n";
	pair<char,int> p2;
//	p2.push_back({'a',1});
	p2.first = 'a';
	p2.second = 1;
	cout<<"Pair 2: {"<<p2.first<<","<<p2.second<<"}\n";
	pair<int,pair<char,int> > pairOfpair;
	pairOfpair.first = 1;
	pairOfpair.second.first = 'a';
	pairOfpair.second.second = 10;
	cout<<"Pair of Pair Demo: ";
	cout<<"{"<<pairOfpair.first<<": {"<<pairOfpair.second.first<<","<<pairOfpair.second.second<<"}}\n";
//	vector<pair<char,int> > pv;
//	pv.push_back({'b',2});
//	pv.emplace_back('c',2);
//	vector<pair<char,int> >::iterator itr;
//	for(itr=pv.begin(); itr!=pv.end(); itr++)
//		cout<<*(itr);
	return 0;
}
