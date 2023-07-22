#include <iostream>
using namespace std;

int main()
{
    int T,size;
    string S;
    cin>>T;
    while(T--){
        getline(cin >> ws, S);
        size= S.length();
        for(int i=0;i<size;i++){
            if(S[i]=='a' || S[i]=='e' || S[i]=='i'||S[i]=='o'||S[i]=='u')
            cout<<S[i];
        }
        cout<<"\n";
        for(int i=0;i<size;i++){
            if(S[i]!='a' && S[i]!='e' && S[i]!='i' && S[i]!='o' && S[i]!='u' && S[i]!=' ')
            cout<<S[i];
        }
        cout<<endl;
    }
    return 0;
}