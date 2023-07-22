#include<iostream>
using namespace std;
int main()
{
    for(int i=1000;i>=1;i--){
        if(i<1000 && i%5==0){
            cout<<"\n"<<i<<" ";
        }
        else{
            cout<<i<<" ";
        }
    }
    return 0;
}
