#include<iostream>
#include<map>
using namespace std;
int main(){
	cout<<"C++ STL Multi-Map practice program...\n";
	cout<<"---------------------------------\n";
	multimap<string,int> m;
	m.insert({"Camera",40});
	m.insert({"Camera",100});
	m.insert({"Camera",80});
	m.insert({"Laptop",400});
	cout<<"Printing Multi map elements...\n";
	for(auto p:m){
		cout<<p.first<<" : "<<p.second<<endl;	
	}
	m.erase("Camera");
	m.erase(m.find("Camera"));
	cout<<"Printing Multi map elements after erasing some elements...\n";
	for(auto p:m){
		cout<<p.first<<" : "<<p.second<<endl;	
	}
	return 0;
}
	
