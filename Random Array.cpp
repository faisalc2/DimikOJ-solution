#include <iostream>
using namespace std;

int main()
{
    int T,j,k,cnt=0,lnt,size;
    cin>>T;
    for(k=1;k<=T; k++)
    {
        cin>>size;
        int *arr;
        arr = (int *) malloc(sizeof(int) * size);
        for(j=0;j<size;j++)
        {
            cin>>arr[j];
        }
        cnt=0;
        for(int i=1;i<=size-1;i++){
            if(arr[i] < arr[i-1]){
                cnt++;
                break;
            }
        }
        if(cnt==0){
            cout<<"YES\n";
        }else{
            for(int i=1;i<=size-1;i++){
                if(arr[i] > arr[i-1]){
                    cnt--;
                    break;
                }
            }
            if(cnt==0)cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
    return 0;
}
