#include <iostream>
using namespace std;

int main()
{
    int t,i,j,n,m;
    cin>>t;
    while (t--)
    {
        cin>>n>>m;
        for(i=0;i<n;i++){
            for(j=0;j<=i;j++){
                cout<<m<<" ";
            }
            //if(i!=n-1)
                cout<<endl;
        }
        for(i=0;i<n-1;i++){
            for(j=0;j<n-i-1;j++){
                cout<<m<<" ";
            }
            //if(i!=n-2)
                cout<<endl;
        }
        cout<<"\n";
    }
    
    return 0;
}