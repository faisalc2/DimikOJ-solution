#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
long long int fact(long long int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    int t,n,k,i;
    double sum=2,factorial;
    cin >> t;
    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<"Result = 1.0000"<<endl;
            continue;
        }
        else if(n==2)
        {
            cout<<"Result = 2.0000"<<endl;
            continue;
        }
        for(i=3;i<=n;i++)
            sum+= (double)i/fact(i);
        cout<<"Result = "<<fixed<<setprecision(4)<<sum<<endl;
        sum=2;
    }
    return 0;
}