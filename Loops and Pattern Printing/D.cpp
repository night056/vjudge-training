//Given a non-negative number - N, print N!

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, f=1;
    cin>>x;
    while(x>0)
    {
        f*=x;
        x=x-1;
    }
    cout<<f;
    return 0;
}
