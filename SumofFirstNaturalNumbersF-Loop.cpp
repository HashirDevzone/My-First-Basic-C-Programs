#include <iostream>

using namespace std;
int main()
{

    int num1, sum = 0;
    cout << "Enter any number: " << endl;
    cin >> num1;

    for (int i = 0; i <= num1; i++)
    {
        sum = sum + i;
    }
    cout<<"Sum of first "<<num1<<" Natural Numbers is equal to: "<<sum;
    return 0;
}
