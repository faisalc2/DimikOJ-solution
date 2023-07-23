// #include <iostream>
// using namespace std;

// int main()
// {
//     int T;
//     int Xc,Yc,x,y,r;
//     cin >> T;
//     while(T--)
//     {
//         cin>>Xc>>Yc>>r>>x>>y;
//         if((Xc+r)>=x && (Xc-r)<=x && (Yc+r)>=y && (Yc-r)<=y)
//             cout<<"The point is inside the circle\n";
//         else
//             cout<<"The point is not inside the circle\n";
//     }
//     return 0;
// }

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T;
    double Xc,Yc,x,y,r;
    cin >> T;
    while(T--)
    {
        cin>>Xc>>Yc>>r>>x>>y;
        if(sqrt((Xc-x)*(Xc-x)+(Yc-y)*(Yc-y))<=r)
            cout<<"The point is inside the circle\n";
        else
            cout<<"The point is not inside the circle\n";
    }
    return 0;
}