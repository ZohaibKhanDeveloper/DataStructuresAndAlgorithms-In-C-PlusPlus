#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
int main(){
	cout<<"C++ STL Unordered-Map Practice Program...\n";
	cout<<"-----------------------------------------\n";
	unordered_map<string,int> um;
	um.insert({"Camera",40});
	um.insert({"TV",100});
	um.insert({"Bottle",80});
	um.insert({"Laptop",400});
	for(auto p:m){
		cout<<p.first<<" : "<<p.second<<endl;	
	}
	return 0;
}
