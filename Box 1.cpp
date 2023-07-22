#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int ara[T];
    for(int i=0;i<T;i++){
        cin>>ara[i];
    }
    for(int i=0;i<T;i++){
        for(int j=0;j<ara[i];j++){
            for(int k=0;k<ara[i];k++){
                cout<<"*";
            }
            cout<<endl;
        }
       if(i!=T-1) cout<<endl;
    }
    return 0;
}
