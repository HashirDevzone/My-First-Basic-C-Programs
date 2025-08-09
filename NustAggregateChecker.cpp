//only for students that have done Fsc and Matric

#include<iostream>
using namespace std;

int main(){
    int nust_marks;
    int matric_marks;
    double fsc_marks;
    double matric_percentage;
    int fsc_percentage;
    int total_marks=1100;
    float nust_percentage;
    float nust_score_aggregate;
    float matric_aggregate;
    float fsc_aggregate;
    float total_aggregate;

    

    cout<<"Hello Buddy"<<endl;

    cout<<"Enter your Matriculation Obtained Marks: "<<endl;
    cin>>matric_marks;
    matric_percentage=(double)((matric_marks)*100)/total_marks;
    cout<<"Your Matric Percentage: "<<matric_percentage<<endl;
    cout<<endl;

    cout<<"Enter you Intermediate(Fsc) Obtained marks: "<<endl;
    cin>>fsc_marks;
    fsc_percentage=(double)((fsc_marks)*100)/total_marks;
    cout<<"Your Fsc Percentage: "<<fsc_percentage<<endl;
    cout<<endl;
    
    cout<<"Enter your Obtained Marks in NUST"<<endl;
    cin>>nust_marks;
    nust_percentage=(float)(nust_marks)/200;
    cout<<endl;

    nust_score_aggregate=(float)(nust_percentage)*75;
    cout<<"Your NUST SCORE AGGREGATE(NOT YOUR TOTAL AGGREGATE): "<<nust_score_aggregate<<endl;
    cout<<endl;

    matric_aggregate=(float)(matric_percentage)*(0.10);
    fsc_aggregate=(float)(fsc_percentage)*(0.15);

    cout<<"Your Total Aggregate for NUST: "<<(float)(nust_score_aggregate+matric_aggregate+fsc_aggregate)<<endl;

    return 0;

}