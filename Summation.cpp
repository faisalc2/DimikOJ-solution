#include<iostream>
using namespace std;
int main()
{
    int N,T;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N;
        int l,f,vhagfol=1,vhagses;
        l=N%10;
        while(vhagfol!=0)
        {
            vhagfol=N/10;
            vhagses=N%10;
            N=vhagfol;
        }
        f=vhagses;
        cout<<"Sum = "<<f+l<<endl;
    }
}
