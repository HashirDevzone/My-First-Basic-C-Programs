#include<iostream>
using namespace std;

int main(){
    char Operator;
    double num1,num2;
    double result;
    cout<<"Enter any Operator(+ - * /): "<<endl;
    cin>>Operator;
    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter second number: "<<endl;
    cin>>num2;

    switch (Operator)
    {
    case '+':
        result=num1+num2;
        cout<<"Addition of the above two numbers is: " <<result<<endl;
        break;
    case '-':
        result=num1-num2;
        cout<<"Subtraction of two numbers is: " <<result<<endl;
        break;
    case '*':
        result=num1*num2;
        cout<<"Multiplication of two numbers: " <<result<<endl;
        break;
    case '/':
        result=num1/num2;
        cout<<"Divison of two numbers is: " <<result<<endl;
        break;        
    default:
        cout<<"Invalid Command Type + , - , * , or /";
        break;
    }
    return 0;
}
    