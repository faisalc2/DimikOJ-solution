#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int T;
    cin>>T;
    double r1,r2;
    double a,B;
    while (T--)
    {
    cin>>r1>>r2>>B;
    double b=300-B;
    b=(1.0*r2/b)*6;
    cout<<fixed<<setprecision(2)<<b<<" ";

    if((r1-r2)<0)
    {
        cout<<"0.00"<<endl;
    }else{

        a=(r1-r2)+1;
        a=((1.0*a/B)*6);
        cout<<fixed;
        cout<<setprecision(2)<<a<<" "<<endl;
    }
    }
    return 0;
}
