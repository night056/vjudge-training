//Given an array of integers, find the sum of the elements of the given array.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    long int k, flag=0;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        for(int j=0; j<n; j++)
        {
            cin>>k;
            flag+=k;
        }
        cout<<flag<<endl;
        flag=0;
    }
    return 0;
}
