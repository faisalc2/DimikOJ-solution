#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T,X,N;
    cin>>T;
    while (T--)
    {
        cin>>X>>N;
        if(X>N)
            cout<<"Invalid!\n";
        else{
            for(int i=1;i<=sqrt(N);i++){
                if(X*i>N)
                    break;
                cout<<X*i<<endl;
            }
        }
        cout<<"\n";
    }
    
    return 0;
}