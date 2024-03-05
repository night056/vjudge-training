//Find a duplicate element in the given array of integers. There will be only a single duplicate element in the array.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum=0, c, dup;
    cin>>n;
    vector <int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    for(int i=0; i<n; i++)
    {
        c=v[i];
        for(int j=i+1; j<n; j++)
        {
            if(c==v[j])
            {
                dup=c;
                break;
            }
        }
    }
    cout<<dup;

}
