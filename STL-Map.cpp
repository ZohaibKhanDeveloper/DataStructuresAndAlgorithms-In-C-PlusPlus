#include<iostream>
#include<map>
using namespace std;
int main(){
	cout<<"C++ STL Map practice program...\n";
	cout<<"---------------------------------\n";
	map<string,int> m;
	m["Laptop"] = 100;
	m["TV"] = 50;
	m["Headphones"] = 30;
	cout<<"Headphones: "<<m["Headphones"]<<endl;
	cout<<"TV: "<<m["TV"]<<endl;
	cout<<"Laptop: "<<m["Laptop"]<<endl;
	m.insert({"Camera",40});
	cout<<"Camera: "<<m["Camera"]<<endl;
	m.emplace("AaloGobhi",5);
	cout<<"Aalo Gobhi: "<<m["AaloGobhi"]<<endl;
	for(auto p:m){
		cout<<p.first<<" : "<<p.second<<endl;	
	}
	if(m.find("Headphones")!=m.end()){
		cout<<"Headphones Found...\n";
	}else{
		cout<<"Headphones not Found...\n";
	}
	m.erase("Headphones");
	cout<<"Msg after erasing headphones...\n";
	if(m.find("Headphones")!=m.end()){
		cout<<"Headphones Found...\n";
	}else{
		cout<<"Headphones not Found...\n";
	}
	return 0;
}
