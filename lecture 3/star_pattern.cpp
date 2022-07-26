#include<iostream>
using namespace std;


int main(){

   int n,i=1,val=1;
    cin>>n;
    while(i<=n){
        int spaces=1;
        while(spaces<=n-i){
            cout<<" ";
            spaces=spaces+1;
        }
        int j=0;
        val=i;
        while(j!=2*i-1){
            cout<<"*";
            j=j+1;
        }
       spaces=1;
        while(spaces<=n-i){
            cout<<" ";
            spaces=spaces+1;
        }
        cout<<endl;
        i=i+1;
    }
  
}
