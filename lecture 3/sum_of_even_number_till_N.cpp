#include<iostream>
using namespace std;


int main(){
    int N;
    cin>>N;
    int p=0,i=0;
    while(i<=N){
        if(i%2==0){
             p=p+i;
        }
        i+=1;
    }
    cout<<p;
}