//Write a program which reads three integers a, b and c, and prints the number of divisors of c between a and b.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, i, j=0;
    cin>>a>>b>>c;
    for(i=a; i<=b; i++)
    {
        if(c%i==0)
            j++;
    }
    cout<<j<<endl;
}
