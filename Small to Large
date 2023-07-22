#include<iostream>
#include<string>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int a,b,c;
    for(int i=1;i<=T;i++){
    cin>>a>>b>>c;
    cout<<"Case "<<i<<": ";
    if(a<b && a<c){
        cout<<a<<" ";
        if(b<c){
            cout<<b<<" ";
            cout<<c<<" ";
        }else{
            cout<<c<<" ";
            cout<<b<<" ";
        }
    }
    else if(b<a && b< c){
        cout<<b<<" ";
        if(a<c){
            cout<<a<<" ";
            cout<<c<<" ";
        }else{
            cout<<c<<" ";
            cout<<a<<" ";
        }
    }
    else{
        cout<<c<<" ";
        if(b<a){
            cout<<b<<" ";
            cout<<a<<" ";
        }else{
            cout<<a<<" ";
            cout<<b<<" ";
        }
    }
    cout<<endl;
    }
    return 0;
}
