//This program will help you to find the minimum of two numbers.

#include<iostream>
using namespace std;

int main(){
    double num1,num2;
    double minnumber;
    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter second number: "<<endl;
    cin>>num2;
    minnumber=min(num1,num2);
    cout<<"The smaller number is: " <<minnumber<<endl;
    return 0;
}