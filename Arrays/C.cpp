//Print sum of all odd elements in an array.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum=0;
    cin>>n;
    vector <int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    for(int i=0; i<n; i++)
    {
        if(v[i]%2!=0)
            sum+=v[i];
    }
    cout<<sum;

}
