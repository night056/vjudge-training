//Given two integers a and b, compute a power b.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, b;
    long int x=1;
    cin>>b>>n;
    for(int i=0; i<n; i++)
        x*=b;
    cout<<x;
}
