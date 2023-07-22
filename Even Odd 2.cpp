#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int T, i, j;
    cin>>T;

    for(int i=1; i<=T; i++)
    {
         char N[101];
         cin>>N;
         int k = strlen(N);
         int p = N[k-1]; 

         if (p % 2 == 1)
         {
             cout<<"odd\n";
         }

         else 
         {
             cout<<"even\n";
         }
     }

     return 0;
}
