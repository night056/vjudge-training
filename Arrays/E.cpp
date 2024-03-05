//Print unique elements of the array in the same order as they appear in the input.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum=0, c, dup=0, flag=0;
    cin>>n;
    vector <int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j!=i && v[i]==v[j])
                flag=1;
        }
        if(flag==0)
             cout<<v[i]<<" ";
        flag=0;
    }
}
