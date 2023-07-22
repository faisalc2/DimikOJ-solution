#include <iostream>
#include<cmath>
using namespace std;
#define size 100001
char ara[size];

void sieve(){
    int i,j,root;
    for(int i=2;i<size;i++) ara[i]=1;

    root = sqrt(size);
    for(i=2;i<=root;i++){
        if(ara[i]==1){
            for(j=2;i*j<=size;j++)
            {
                ara[i*j]=0;
            }
        }
    }
}

int main()
{
    int T,a,b,i,count;
    sieve();
    cin>>T;
    while (T--)
    {
        cin>>a>>b;
        count =0;
        for(i=a;i<=b;i++){
            count=0;
            for(i=a;i<=b;i++){
                if(ara[i])count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
