#include<iostream>
using namespace std;


int main(){

      int S,E,W;
      cin>>S>>E>>W;
      while(S<=E){
          int p=(S-32)*(5.0/9);
          cout<<S<<"\t"<<p<<endl;
          S+=W;
      }
    return 0;
}


