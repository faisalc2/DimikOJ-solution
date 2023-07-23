#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        char ch;
        cin >> ch;
        if (ch >= 'a' && ch <= 'z')
            cout << "Lowercase Character\n";
        else if (ch >= 'A' && ch <= 'Z')
            cout << "Uppercase Character\n";
        else if (ch >= '0' && ch <= '9')
            cout << "Numerical Digit\n";
        else
            cout << "Special Character\n";
    }   
    return 0;
}