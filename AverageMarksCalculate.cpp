#include<iostream>
using namespace std;

//Remember Average Marks does not need 

int main(){
    int eng , sci , math , comp ;
    cout<<"THIS PROGRAM WILL HELP YOU TO FIND THE AVERAGE OF YOUR MARKS"<<endl;

    cout<<"Enter your English marks you obtained: "<<endl;
    cin>>eng;

    cout<<"Enter your Science marks you obtained: "<<endl;
    cin>>sci;

    cout<<"Enter your Mathematics marks you obtained: "<<endl;
    cin>>math;

    cout<<"Enter your Computer marks you obtained: "<<endl;
    cin>>comp;

    int average;
    average=(eng+sci+math+comp)/4;
    cout<<"Average Marks= "<<average<<endl;

    return 0;
}