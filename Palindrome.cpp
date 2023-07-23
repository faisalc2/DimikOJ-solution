#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int t;
    string word;
    char temp;
    cin>>t;
    while (t--)
    {
        cin>>word;
        int m= (word.length())-1;
        int flag=0;
        for(int k=0;k<m;k++,m--){
            if(word[k]!=word[m]){
            flag=1;
            break;
            }
        }
        (flag==1)? cout<<"Sorry! It is not palindrome!":cout<<"Yes! It is palindrome!";
        cout<<"\n";
    }
       
    return 0;
}