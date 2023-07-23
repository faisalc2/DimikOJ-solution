#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t,i;
    int p,q, c,sum;
    cin >> t;
    while (t--)
    {
        
        cin >> p >> q>> c;
        sum=p;
        for(i=0; i<q-1;i++){
            sum =(sum*p)%c;
        }
        cout<<"Result = "<<sum<<endl;
    }
    return 0;
}