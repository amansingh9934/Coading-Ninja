#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;
    int i=1;
    int j=1;
    while(i<=n){
        int k=1;
        j=i;
        while(k<=i){
            cout<<j;
            k=k+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
  
}