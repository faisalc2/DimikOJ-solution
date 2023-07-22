#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int size;
        cin>>size;
        int *arr ;
        arr= (int*)malloc(size*sizeof(int));
        for (int i = 0; i < size; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < size; i+=2)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        free(arr);
    }
    return 0;
}