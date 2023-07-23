// #include <iostream>
// using namespace std;

// int main()
// {
//     int t,n;
//     int arr[100001];
//     int flag;
//     //int* arr;
//     cin>>t;
//     while (t--)
//     {
//         cin>>n;
//         //arr= (int*)malloc(n*sizeof(int));
//         //arr= new int[n-1];
//         for(int i=0; i<n-1; i++)
//             cin>>arr[i];
        
//         for(int i=1; i<=n; i++)
//         {
//             flag=0;
//             for(int j=0; j<n-1; j++)
//             {
//                 if(arr[j]==i)
//                 {
//                     flag=1;
//                     break;
//                 }
//             }
//             if(flag==0)
//             {
//                 cout<<i<<endl;
//                 break;
//             }
//         }
//     //delete[] arr;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int t,n,num;
    int arra[1000001];
    cin>>t;
    while (t--)
    {
        cin>>n;
        for(int i=0; i<=n; i++)
            arra[i]=0;
        for(int i=0; i<n-1;i++)
        {
            cin>>num;
            arra[num]=1;
        }
        for(int i=1; i<=n-1; i++)
        {
            if(arra[i]==0)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}