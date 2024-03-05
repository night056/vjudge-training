/*Chef's phone shows a Battery Low notification if the battery level is 15% or less.
Given that the battery level of Chef's phone is X%, determine whether it would show a Battery low notification.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //roshni
    int T, x;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        cin>>x;
        if(x<=15)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
