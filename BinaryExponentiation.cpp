#include<iostream>
using namespace std;
int main(){
	int num,ans=1,pow;
	long binForm;
	cout<<"Simple Program that calculate power of the given number using an efficient way e.g: Binary Exponentiation...\n";
	cout<<"--------------------------------------------------------------------------------------------------------------\n";
	cout<<"Enter number: ";
	cin>>num;
	cout<<"\nEnter Power of the number: ";
	cin>>pow;
	binForm = pow;
	if(pow<0){
		num = 1/num;
		binForm = -binForm;
	}
	if(pow==0){
	cout<<"Result: "<<1.0; 
	exit(0);	
	} 
	if(num==0){
		cout<<"Result: "<<0.0;
		exit(0);
	}
	if(num==1){
		cout<<"Result: "<<1.0;
		exit(0);
	}
	if(num==-1 && pow%2==0){
		cout<<"Result: "<<1.0;
		exit(0);	
	}
	if(num==-1 && pow%2!=0){
		cout<<"Result: "<<-1.0;
		exit(0);
	}
	while(binForm>0){
		if(binForm%2==1){
			ans*=num;
		}
		num*=num;
		binForm /= 2;
	}
	cout<<"Result: "<<ans;
	return 0;
}
