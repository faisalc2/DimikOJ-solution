#include <iostream>
using namespace std;

int main()
{
    int T,size,cnt=0;
    string S;
    cin>>T;
    char vowel[10]={'a','e','i','o','u','A','E','I','O','U'};
    while(T--){
        getline(cin >> ws, S);
        size= S.length();
        for(int i=0;i<size;i++){
            for(int j=0;j<10;j++){
                if(S[i]==vowel[j]) cnt++;
            }
        }
        cout<<"Number of vowels = "<<cnt<<endl;
        cnt=0;
    }
    return 0;
}