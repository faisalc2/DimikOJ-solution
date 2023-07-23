#include <iostream>
using namespace std;

int main()
{
    long long int A,B,C;
    int T;
    cin >> T;
    while (T--)
    {
        cin>>A>>B>>C;
        if(A<C){
            A+=(C-A);
        }
        else if(A>C && A%C!=0)
        {
            A=(A-(A%C));
            A+=C;
        }
        while(A<=B)
        {
            cout<<A<<"\n";
            A+=C;
        }
        cout<<"\n";
    }
    
    return 0;
}