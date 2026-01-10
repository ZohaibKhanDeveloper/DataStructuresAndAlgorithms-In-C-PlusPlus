#include<iostream>
#include<vector>
using namespace std;
void print(string m,vector<int> v){
	cout<<m;
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<"  ";
	}
	cout<<endl;
}
int main(){
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	print("Vector Before Operations: ",v);
	v.erase(v.begin()+2);
	print("Vector After Operations: ",v);
		vector<int> v2;
	for(int i=0; i<v.size(); i++)
		v2.push_back(v[i]*2);
	print("Vector 2 Before Operations: ",v2);
//	v2.insert((v.begin()+2),6);
	v2.clear();
	print("Vector 2 After Clear Operation: ",v2);
	if(v2.empty()){
		cout<<"Vector 2 is Empty...\n";
	}
	else{
		cout<<"Vector 2 is Not Empty...\n";
	}
//	cout<<"Vector 2 (isEmpty): "<<v2.empty()<<endl;
	cout<<"Below are the vector iterators part...\n";
	vector<int>::iterator itr;
	cout<<"Forward Iterator on vector: ";
	for(itr=v.begin(); itr!=v.end(); itr++){
		cout<<*(itr)<<"	 ";
	}
	vector<int>::reverse_iterator itr2;
	cout<<"\nBackward Iterator on vector: ";
	for(itr2=v.rbegin(); itr2!=v.rend(); itr2++){
		cout<<*(itr2)<<" ";
	}
	return 0;
}
