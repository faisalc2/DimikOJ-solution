#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t,x,k,i;
    long long int sum=1;
    cin >> t;
    while(t--)
    {
        cin>>x>>k;
        for(i=1;i<=k;i++)
            sum+= pow(x,i);
        cout<<"Result = "<<sum<<endl;
        sum=1;
    }
    return 0;
}