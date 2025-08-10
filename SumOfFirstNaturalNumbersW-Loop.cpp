#include<iostream>
using namespace std;
int main(){
    int num1,sum=0;
    cout<<"Enter any number:"<<endl;
    cin>>num1;

    int i=1;
    while (i<=num1)
    {
        sum=sum+i;
        i++;
       
    }
     cout<<"Sum of "<<num1<<" Natural Numbers is equal to: "<<sum;
    
    return 0;

    
}