//Given an integer N, check whether it's an Armstrong number or not.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b , n, c=0;
    cin>>n;
    a=n;
    while(a>0)
    {
        b=a%10;
        c+=b*b*b;
        a/=10;
    }
    if(c==n)
        cout<<"Yes";
    else
        cout<<"No";
}
