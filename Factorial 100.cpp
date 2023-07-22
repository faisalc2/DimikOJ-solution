#include<iostream>
using namespace std;
int main()
{
    int N,T, Zcount=0;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N;
        if(N>0)
        {
           while (1)
           {
            N=N/5;
            Zcount=Zcount+N;
            if(N<5) break;
           } 
        }
        cout<<Zcount<<endl;
        Zcount=0;
    }
    return 0;
}
