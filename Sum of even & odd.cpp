#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n,even=0,odd=0,digit;
	cin>>n;
	while(n!=0){
		digit=n%10;
		if(digit%2==0){
			even=even+digit;
		}
		else{
			odd=odd+digit;
		}
		n=n/10;
	}
	cout<<even<<" "<<odd<<endl;
	
}
