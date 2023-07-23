#include <iostream>
using namespace std;

int main()
{
    int t,size,i;
    string s;
    cin >> t;
    while (t--)
    {
        cin>>s;
        size = s.length();
        if(size==1){
            cout<<s<<endl;
        }
        else{
            while(s[size-1]=='0'){
            size--;
            }
            for(i=size-1;i>=0;i--){
                cout<<s[i];
            }
            cout<<"\n";
        }
    }
    
    return 0;
}