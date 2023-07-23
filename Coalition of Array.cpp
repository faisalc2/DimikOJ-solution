#include <iostream>
#include <cstring>
using namespace std;
int first[201];
int second[101];
int main()
{
    int t,n,m,size,index_min,temp;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>first[i];
        cin>>m;

        for(int i=0;i<m;i++)
            cin>>second[i];

        size=n+m;

        for(int i=n,j=0;i<size;i++,j++)
            first[i]=second[j];

        for(int i=0; i<size-1; i++){
            index_min= i;
            for(int j = i+1; j<size; j++){
                if(first[j] < first[index_min]){
                    index_min=j;
                }
            }
            if(index_min != i){
                temp=first[i];
                first[i]=first[index_min];
                first[index_min]=temp;
            }
        } 
        for(int i=0;i<n+m;i++)
            cout<<first[i]<<" ";
        cout<<endl;
    }
    return 0;
}