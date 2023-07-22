#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int T;
    cin>>T;
    long long int j,temp,fact=1;
    int num;
    for(int i=1;i<=T;i++){
        cin>>num;
        if(num==0){
            cout<<1<<endl;
        }else{
            for(j=1;j<=num;j++){
                temp=j*fact;
                fact=temp;
            }
            cout<<fact<<endl;
        }
        fact=1;
    }
    return 0;
}
