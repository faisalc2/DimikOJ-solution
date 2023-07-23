#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin>>str;
        int len = str.length();
        for(int i=0; i<len; i++)
        {
            if(str[i] == 'L')
                str[i] = str[i-1];
            else if(str[i] == 'R')
                str[i] = str[i+1];
        }
        for(int i=0; i<len; i++)
            cout<<str[i];
        cout<<endl;
    }
    
    return 0;
}