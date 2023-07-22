#include<iostream>
using namespace std;
int main()
{
    int T,i,n;
    cin>>T;
    int array[T];
    for(i=0;i<T;i++){
        cin>>array[i];
    }
    for(i=0;i<T;i++){
        if(array[i]%2==0){
             cout<<"even"<<endl;
        }
        else{
            cout<<"odd"<<endl;
        }
    }
    return 0;
}
