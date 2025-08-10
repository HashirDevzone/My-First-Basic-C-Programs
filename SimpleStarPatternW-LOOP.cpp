//Used While Loop in this Program.


#include<iostream>
using namespace std;

int main(){
    int stars;
    cout<<"Enter no of stars you wanna print: "<<endl;
    cin>>stars;
    int i=1;
    while (i<=stars)
    {
        i++;
        int j=1;
        while (j<=i)
        {
            j++;
            cout<<"*";
        }
        cout<<endl;
        
    }
    

    return 0;
}