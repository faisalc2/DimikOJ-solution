#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==0){
            cout<<1<<"\n";
            continue;
        }
        else if(n<0){
            cout<<"\n";
            continue;
        }
        else if(n==1){
            cout<<"2 + 1\n";
            continue;
        }
        else {
            for(;n>1;n--){
                cout<<"2^"<<n<<" + ";
            }
            cout<<"2 + 1\n";
        }
    }
    return 0;
}