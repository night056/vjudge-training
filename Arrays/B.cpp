//Print array in reverse order.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <long int> v1(n), v2(n);
    int j=n-1;
    for(int i=0; i<n; i++)
        cin>>v1[i];
    for(int i=0; i<n; i++)
    {
        v2[i]=v1[j];
        j-=1;
    }
    for(int i=0; i<n; i++)
        cout<<v2[i]<<" ";
    return 0;
}
