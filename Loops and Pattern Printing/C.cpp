//Given a number N, reverse the number.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int x, d=0;
    cin>>x;
    while(abs(x)>0)
    {
        d=d*10+x%10;
        x/=10;
    }
    cout<<d;
    return 0;
}
