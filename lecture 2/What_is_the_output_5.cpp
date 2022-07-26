What is the output of the following code if the input is : 2 10.1 D ?


#include <iostream>
using namespace std;
int main() {
    int a;
    double d;
    char c;
    cin >> a >> d >> c;
    cout << a << d << c << endl;
}



Correct Answer:  210.1D 



Solution Description
We are taking 3 inputs - one integer, one double and one character value. And our input is : "2 10.1 D" (without quotes). So, 2 will be assigned to a, 10.1 will be assigned to d and D will be assigned to c.
We can enter multiple input values either separated by space or in new lines. 
Then we are printing all the three values one by one, without any space between them. So ans is : 210.1D