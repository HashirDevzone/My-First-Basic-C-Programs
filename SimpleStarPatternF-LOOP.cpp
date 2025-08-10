#include<iostream>
using namespace std;

int main(){
    int stars;
    cout<<"Enter no of stars you want to Print: "<<endl;
    cin>>stars;

    for (int i = 1; i<=stars; i++)
    {
        for (int j = 1;j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}