#include <iostream>
using namespace std;
int main()
{
    cout << "*******Know your Grade by marks******";
    bool isCorectMarks = false;   // flag to check condition
    while (isCorectMarks != true) // check if flag not true
    {
        cout << "\nPlease Enter you marks:";
        int n;
        cin >> n;
        if (n < 0 || n > 100)
        {
            cout << "Please enter Marks between 0 to 100";
        }
        else if (n >= 90)
        {
            cout << "Your Grade is A";
            isCorectMarks = true;
        }
        else if (n >= 80 && n < 90)
        {
            cout << "Your Grade is B";
            isCorectMarks = true;
        }
        else if (n >= 70 && n < 80)
        {
            cout << "Your Grade is C";
            isCorectMarks = true;
        }
        else if (n >= 60 && n < 70)
        {
            cout << "Your Grade is D";
            isCorectMarks = true;
        }
        else if (n >= 50 && n < 60)
        {
            cout << "Your Grade is E";
            isCorectMarks = true;
        }

        else
        {
            cout << "You are Failed";
            isCorectMarks = true;
        }
    }
}