#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        char s[n][10000];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(s[i], s[j]) > 0)
            {
                char temp[10000];
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }
        for(int i=0;i<n;i++)
        {
            cout<<s[i]<<endl;
        }
    }
    return 0;
}