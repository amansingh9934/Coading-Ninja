#include<iostream>
#include <cmath>
using namespace std;

int main() {
	double salary;
    char grade;
    cin>>salary>>grade;
    double hra=0.20*salary;
    double da=0.50*salary;
    double pf=0.11*salary;
    double total;
    double allow;
    if(grade=='A'){
        allow=1700;
    }
    else if(grade=='B'){
        allow=1500;
    }
    else{
        allow=1300;
    }
    total=salary+hra+da+allow;
    total=total-pf;
    cout<<llround(total);
    
	return 0;
}