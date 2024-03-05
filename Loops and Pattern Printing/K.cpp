//Given an integer N, check whether it is a Narcissistic number or not.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b=0, n, c=0, d, e=1;
    cin>>n;
    a=n;
    while(a>0)
    {
        b=b+1;
        a/=10;
    }
    a=n;
    while(a>0)
    {
        d=a%10;
        for(int i=0; i<b; i++)
            e*=d;
        c+=e;
        a/=10;
        e=1;
    }
    if(c==n)
        cout<<"Yes";
    else
        cout<<"No";
}
