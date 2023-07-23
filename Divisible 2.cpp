#include <iostream>
using namespace std;

int main()
{
    int T;
    long long int a,b,c,d,e;
    cin >> T;
    while (T--)
    {
        cin>>a>>b>>c;
        e= a*b;
        d=e;
        while(d<=c)
        {
            cout<<d<<"\n";
            d+=e;
        }
        cout<<"\n";
    }
    
    return 0;
}