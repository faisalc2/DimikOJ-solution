// Add some code
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int a,c;
    double b;
    for(int i=1;i<=T;i++){
        cin>>a;
        b=sqrt(a);
        c=b;
        if(b-c==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
