//Given a positive integer N, print the sum of cubes of 1st N natural numbers.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, sum=0;
    cin>>x;
    for(int i=1; i<=x; i++)
        sum+=i*i*i;
    cout<<sum;
}
