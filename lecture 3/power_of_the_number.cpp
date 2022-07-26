#include<iostream>
using namespace std;

int main() {
	int x,n,i=1;
    cin>>x>>n;
    int result=x;
    if(n==0){
        result=1;
        cout<<result;
    }
    else{
        while(i<n){
            result=result*x;
            i+=1;
        }
        cout<<result;
    }
	return 0;
}
