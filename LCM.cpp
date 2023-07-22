// Add some code
#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, gcd = 0;
        long long int lcm = 0;
        cin >> a >> b;
        int min = (a < b) ? a : b;

        // Calculate the Greatest Common Divisor (GCD)
        for (; min >= 1; min--)
        {
            if (a % min == 0 && b % min == 0)
            {
                gcd = min;
                break;
            }
        }

        if (gcd == 0)
        {
            // Both 'a' and 'b' are zero; LCM is also zero.
            cout << "LCM = 0\n";
        }
        else
        {
             lcm = static_cast<long long int>(a) * b / gcd; // Ensure proper type casting
            cout << "LCM = " << lcm << "\n";
        }
    }

    return 0;
}
