#include <iostream>
using namespace std;

int main()
{
    int T,size;
    string S;
    cin>>T;
    while(T--){
        getline(cin >> ws, S);
        size=S.length();
        for(int i=size-1;i>-1;i--)
        cout<<S[i];
        cout<<endl;
    }
    return 0;
}
