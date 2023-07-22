#include <iostream>
using namespace std;

int main()
{
    int T, size;
    string S;
    int ara[26];
    for (int i = 1; i <= 26; i++) {
        ara[i - 1] = i;
    }
    cin >> T;
    while (T--) {
        getline(cin >> ws, S);
        size = S.length();
        for (int i = 0; i < size; i++) {
            cout << ara[(S[i] - 65)];
        }
        cout << "\n";
    }
    return 0;
}
