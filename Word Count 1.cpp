// Add some code
#include <iostream>
using namespace std;

int main()
{
    int T,size,cnt=0;
    string S;
    cin>>T;
    while(T--){
        getline(cin >> ws, S);
        size=S.length();
        for (int i = 0; i < size; i++)
        {
            if(S[i]==' ')cnt++;
        }
        cout<<"Count = "<<cnt+1<<endl;
        cnt=0;
    }
    return 0;
}
