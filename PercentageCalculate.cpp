#include <iostream>
using namespace std;

int main()
{
    int eng, chemistry, physics;
    float total_marks = 300;
    int obtained_marks;
    float percentage;

    cout << "Enter your English Marks: " << endl;
    cin >> eng;
    cout << "Enter your Chemistry Marks: " << endl;
    cin >> chemistry;
    cout << "Enter your Physics marks: " << endl;
    cin >> physics;

    obtained_marks = (eng + chemistry + physics);
    percentage = (float)((obtained_marks) * 100) / total_marks;

    cout << "Your Percentage= " << percentage << endl;
    if (percentage >= 40)
    {
        cout << "Minimum Passing Marks are 40" << endl;
        cout << "Congratulations you Passed" << endl;
    }
    else if (percentage < 40)
    {
        cout << "Minimum Passing Marks are 40" << endl;
        cout << "Better Luck next time you failed" << endl;
    }

    return 0;
}