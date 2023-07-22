#include<iostream>
#include<string>
using namespace std;
int main()
{
        int T;
        cin>>T;
        int j=0;
        while(j<T){
        string s;
        int a,i,count=0;
        cin.ignore();
        getline(cin,s);
 
        a=s.size();
 
        for(i=0;i<a;i++)
       {
                if(s[i]==' ')
                {
                    while (s[i+1]==' ')
                    {
                        i++;
                    }
                    
                  count++;
                }
       }
        cout<<count+1<<endl;
        j++;
    }
    return 0;
}
