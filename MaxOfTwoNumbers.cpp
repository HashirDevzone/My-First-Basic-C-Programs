//This program will help you to find the maximum of two numbers.


#include<iostream>
using namespace std;

int main(){
    double num1,num2;
    double maxnumber;
    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter second number: "<<endl;
    cin>>num2;
    maxnumber=max(num1,num2);

    cout<<"The greater no is: " <<maxnumber<<endl;
    return 0;
}