#include<iostream>
using namespace std;
int main()
{
    int a,T, Zcount=0;
    string line;
    char find;
    cin>>T;
    for(int i=0;i<T;i++){
        getline(cin >> ws, line);
        cin>>find;
        a= line.length();
        for(int j=0;j<a;j++){
            if(line[j]==find) Zcount++;
        }
        if(Zcount>0)
        cout<<"Occurrence of '"<<find<<"' in '"<<line<<"' = "<<Zcount<<endl;
        else cout<<"'"<<find<<"' is not present"<<endl;
        Zcount=0;
    }
    return 0;
}