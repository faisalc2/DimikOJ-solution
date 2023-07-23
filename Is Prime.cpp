#include <iostream>
#include<cmath>
using namespace std;
int prime( unsigned long long int n)
{
     unsigned long long int root,i;
    if( n==2){
        return 1;
    }
    if(n%2==0){
        return 0;
    }
    root = sqrt(n);

    for(i=3; i <= root; i=i+2){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int t;
    unsigned long long int m;
    cin>>t;
    while (t--)
    {
        cin>>m;
        if(1 == prime(m)){
            cout<<m<<" is a prime\n";
        }
        else{
           cout<<m<<" is not a prime\n";
        }
    }
    return 0;
}