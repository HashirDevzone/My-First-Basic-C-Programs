//This program will help you to find the power of two numbers.

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double num1,num2;
    double power_;

    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter second number: "<<endl;
    cin>>num2;
    power_=pow(num1 , num2);
    cout<<"The power of first number to second number is equal to: "<<power_;
    return 0;
}