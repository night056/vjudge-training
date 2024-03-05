//Decompose a given 3-digit number to digits.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, d, b[3];
    cin>>a;
    if(a<0)
        a=a*-1;
    for(int i=0; i<3; i++)
    {
        d=a%10;
        a=a/10;
        b[i]=d;
    }
    for(int i=2; i>=0; i--)
        cout<<b[i]<<endl;
}
