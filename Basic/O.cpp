//You are given a four-digit positive integer. Form from it a two-digit number consisting of its middle digits.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //roshni
    int a, d, b[4];
    cin>>a;
    if(a<0)
        a=a*-1;
    for(int i=0; i<4; i++)
    {
        d=a%10;
        a=a/10;
        b[i]=d;
    }
    if(b[2]!=0)
        cout<<b[2];
    cout<<b[1];
}
