#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long long int matrix[51][51];
    matrix[0][0]=1;
    matrix[1][0]=1;
    matrix[1][1]=1;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==0)
            cout<<1<<"\n";
        else if(n==1){
            cout<<1<<"\n";
            cout<<1<<" "<<1<<"\n";
        }
        else 
        {
            for(int i=2;i<=n;i++)
            {
                matrix[i][0]=1;
                for(int j=1;j<=i;j++)
                {
                    matrix[i][j]=matrix[i-1][j-1]+matrix[i-1][j];
                }
                matrix[i][i]=1;
            }
            for(int i=0;i<=n;i++)
            {
                for(int j=0;j<=i;j++)
                {
                    cout<<matrix[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        cout<<endl;

    }
    return 0;
}