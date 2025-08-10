#include<iostream>
using namespace std;

int main(){
    int num1,sum=0;
    cout<<"Enter any number: "<<endl;
    cin>>num1;
    int i=0;
    do
    {
        sum=sum+i;
        i++;
    } while (i<=num1);

    cout<<"Sum of first "<<num1<<" Natural Numbers is equal to: "<<sum;
    
    return 0;
}