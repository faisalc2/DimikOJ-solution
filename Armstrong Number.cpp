#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, sum = 0, temp;
        cin >> N;
        temp = N;
        while (temp > 0)
        {
            int digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }
        if (sum == N)
            cout <<N<< " is an armstrong number!\n";
        else
            cout <<N<< "is not an armstrong number!\n";
    }   
    return 0;
}