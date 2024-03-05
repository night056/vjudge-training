//For a given positive integer - N, compute Nth fibonacci number.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=1, b=1, n, c;
    cin>>n;
    if(n>2)
    {
        for(int i=0; i<n-2; i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        cout<<c;
    }
    else
        cout<<1;
}
