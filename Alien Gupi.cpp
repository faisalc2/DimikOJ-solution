#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        double X,cnt=0;
        cin>>X;
        while (X>=1.0)
        {       
            X=X/2;
            cnt++;
        }
        cout<<cnt<<" days"<<endl; 
    }
    return 0;
}