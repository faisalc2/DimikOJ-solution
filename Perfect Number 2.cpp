// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int T;
//     int sum,N,j;
//     cin >> T;
//     while (T--)
//     {
//         cin >> N;
//         for(int num=2;num<N;num++){
//             sum=1;
//             j = sqrt(num);
//             for(int i=2; i<=j; i++)
//             {
//                 if(num%i==0)
//                     sum =sum+i+num/i;
//             }
//             if(sum==num)
//                 cout<<num<<endl;
            
//         }
//         cout<<"\n";
//     }
    
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int T,num;
    cin>>T;
    int ara[5]={6,28,496,8128,33550336};
    while (T--)
    {
        cin>>num;   
        for(int i=0;i<5;i++){
            if(ara[i]<num)
                cout<<ara[i]<<endl;
            else
                break;
        }
        cout<<"\n";
    }
    
    return 0;
}