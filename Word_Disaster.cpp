#include <iostream>
using namespace std;

int main()
{
    int T,size,cnt=1;
    string s;
    cin>>T;
    while(T--){
        cnt=1;
        string space;
        getline(cin>>ws, s);
        size=s.length();
        space[0]=0;
        for(int i=0;i<=size;i++){
            if(s[i]==' ' || s[i]=='.') {
                space[cnt]=i;
                cnt++;
            }
        }
        for(int j=cnt-1,m=1;j>0;j--,m++){
            if(s[space[m]]!='.'){
                for(int k=space[m]-1;k>space[m-1]-1;k--){
                if(s[k]!=' ') cout<<s[k];
                }
            }
            else{
                for(int k=space[m];k>space[m-1];k--){
                    cout<<s[k];
                }
                break;
            }
            cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int T,i,j,k,cnt,srt;
//     char ch;
//     string str;

//     cin>>T;
//     cin.ignore();
//     for(i=1; i<=T; i++)
//     {
//        // cin.ignore();
        
//         getline(cin,str);
        
//         cnt=0;
//         srt=0;
//         for(j=0; j<str.length(); j++)
//         {
//             if(str[j]==' ' || str[j]=='.')
//             {
//                 srt=j;
//                 for(k=(srt); k>=cnt; k--)
//                 {
//                     if(str[k]!=' ')
//                     cout<<str[k];
//                 }
//                 cout<<" ";
//                 cnt=j;
//             }
//         }
//         if(i<T)cout<<endl;
//     }
//     return 0;
// }