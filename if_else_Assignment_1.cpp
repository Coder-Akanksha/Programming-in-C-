#include <iostream>
using namespace std;

int main()
{
    cout << "*******Know your Grade by marks******";
    int n;
    cout << "\nPlease Enter you marks:";
    cin >> n;
    if (n < 0 || n > 100)
    {
        cout << "Please enter Marks between 0 to 100";
    }
    else if (n >= 90)
    {
        cout << "Your Grade is A";
    }
    else if (n >= 80 && n < 90)
    {
        cout << "Your Grade is B";
    }
     else if (n >= 70 && n < 80)
    {
        cout << "Your Grade is C";
    }
     else if (n >= 60 && n < 70)
    {
        cout << "Your Grade is D";
    }
    else if (n >= 50 && n < 60)
    {
        cout << "Your Grade is E";
    }
    
    else
    {
        cout << "You are Failed";
    }
}