#include<iostream>
using namespace std;

int main() {
	int n, remainder,odd=0,even=0;
    cin>>n;
    while(n>0){
        remainder=n % 10;
        if(remainder % 2==0){
            even=even+remainder;
        }
        else{
            odd=odd+remainder;
        }
        n=n/10;
    }
    cout<<even<<" "<<odd;
	return 0;
}