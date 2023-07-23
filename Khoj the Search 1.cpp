#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str,terget;
        cin>>str>>terget;
        int len = str.length();
        int tergetlen = terget.length();

        for(int i=0;i<len;i++){
            if(str[i]==terget[0]){
                int j=0;
                for(;j<tergetlen;j++){
                    if(str[i+j]!=terget[j])
                        break;
                }
                if(j==tergetlen){
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}