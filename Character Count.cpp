#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int a,T;
    char S[1000];
    int count[26]={0};
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>S;
        for(int j=0;j<strlen(S);j++){
            //if(S[j]>='a' && S[j]<='z'){
                count[S[j]-'a']++;
            //} 
        }
        for(int k=0;k<strlen(S);k++){
            if(count[S[k] - 'a'] != 0){
            cout<<S[k]<<" = "<<count[S[k]-'a']<<endl;
            count[S[k] - 'a'] = 0;
            }
        }
        if(i!= T-1) cout<<endl;
    }
    return 0;
}
