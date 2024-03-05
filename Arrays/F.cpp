//Given an array on integers, search a given key in the array using linear search.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, flag=0, k, p;
    cin>>n>>k;
    vector <int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    for(int j=0; j<n; j++)
    {
        if(v[j]==k)
        {
            cout<<j;
            flag=1;
        }
    }
    if(flag==0)
        cout<<-1;
}
